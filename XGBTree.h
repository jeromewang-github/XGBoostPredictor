/***************************************************************************
/**
 * @file xgb_tree.h
 * @date 2017/05/23 17:23:24
 * @brief 
 *  
 **/

#ifndef  XGB_TREE_H
#define  XGB_TREE_H

#include <vector>
#include "XGBNode.h"
#include <sstream>
#include <map>

class XGBTree {
public:
    XGBTree();
    bool parse(const std::string& string_in);
    void dump(std::stringstream& sout) const;
    std::string dump() const;
    bool predict(const std::map<std::string, float>& fea, float* pred) const;
    bool predict(const float* fea, int fea_num, float* pred) const;
    const XGBNode& get_node(int node_idx) const;
    void reset();
    void commit_nodes();
    size_t nodes_num() const;

private:
    void sort_nodes();

private:
    std::vector<XGBNode> _nodes;
    std::vector<int> _nodes_order;

}; // class XGBTree

#endif  //XGB_TREE_H

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
