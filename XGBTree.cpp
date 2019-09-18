/***************************************************************************
/**
 * @file xgb_tree.cpp
 * @date 2017/05/23 17:23:47
 * @brief 
 *  
 **/

#include "XGBTree.h"


XGBTree::XGBTree() {
}

bool XGBTree::parse(const std::string& string_in) {
    std::stringstream ss(string_in);
    std::string node_data;
    while (getline(ss, node_data)) {
        _nodes.push_back(XGBNode());
        if (!_nodes.back().parse(node_data)) {
            _nodes.pop_back();
            return false;
        }
    }

    sort_nodes();

    return true;
}

void XGBTree::dump(std::stringstream& sout) const {
    const size_t nodes_num = _nodes.size();
    for (size_t sz = 0; sz < nodes_num; ++sz) {
        const XGBNode& node = get_node(sz);
        node.dump(sout);
    }
}

std::string XGBTree::dump() const {
    std::stringstream ss;
    dump(ss);

    return ss.str();
}

bool XGBTree::predict(const std::map<std::string, float>& fea,
        float* pred) const {
    int pid = 0; // root node
    while (!get_node(pid).is_leaf()) {
        const std::string& fea_name = get_node(pid).get_split_key();
        float split_value = get_node(pid).get_split_value();
        std::map<std::string, float>::const_iterator it = fea.find(fea_name);
        if (it == fea.end()) {
            return false;
        }
        float fea_val = it->second;

        if (fea_val < split_value) { // move left
            pid = get_node(pid).left();
        } else { // move right
            pid = get_node(pid).right();
        }
    }

    // get leaf value
    *pred = get_node(pid).get_leaf_value();

    return true;
}

bool XGBTree::predict(const float* fea, int fea_num, float* pred) const {
    int pid = 0; // root node
    const XGBNode* node_ptr = &get_node(pid);
    while (!node_ptr->is_leaf()) {
        const std::string& fea_name = node_ptr->get_split_key();
        int fea_index = node_ptr->get_split_feature_index();
        float split_value = node_ptr->get_split_value();
        if (fea_index >= fea_num) {
            return false;
        }
        float fea_val = *(fea + fea_index);

        if (fea_val < split_value) { // move left
            pid = node_ptr->left();
        } else { // move right
            pid = node_ptr->right();
        }
        node_ptr = &get_node(pid);
    }

    // get leaf value
    *pred = node_ptr->get_leaf_value();

    return true;
}

const XGBNode& XGBTree::get_node(int node_idx) const {
    int node_pos = _nodes_order[node_idx];
    return _nodes[node_pos];
}

void XGBTree::reset() {
    _nodes.clear();
    _nodes_order.clear();
}

void XGBTree::sort_nodes() {
    const size_t nodes_num = _nodes.size();
    _nodes_order.resize(nodes_num);
    for (size_t sz = 0; sz < nodes_num; ++sz) {
        const int node_idx = _nodes[sz].node_index();
        _nodes_order[node_idx] = sz;
    }
}

void XGBTree::commit_nodes() {
    sort_nodes();
}

size_t XGBTree::nodes_num() const {
    return _nodes.size();
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
