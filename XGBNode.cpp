/***************************************************************************
/**
 * @file xgb_node.cpp
 * @date 2017/05/23 14:13:35
 * @brief 
 *  
 **/

#include "XGBNode.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

XGBNode::XGBNode() : 
    _index(INVALID_FLAG),
    _left_child(INVALID_FLAG),
    _right_child(INVALID_FLAG) {
}

bool XGBNode::is_leaf() const {
    return (_left_child == -1);
}

bool XGBNode::is_valid() const {
    return (_index != INVALID_FLAG);
}

void XGBNode::reset() {
    _index = INVALID_FLAG;
    _left_child = INVALID_FLAG;
    _right_child = INVALID_FLAG;
}

void XGBNode::set_split(const std::string& fea_name, float split_val) {
    _fea_name = fea_name;
    _info.split_value = split_val;
}

void XGBNode::set_split(int fea_idx, float split_val) {
    _fea_index = fea_idx;
    _info.split_value = split_val;
}

void XGBNode::set_leaf(float leaf_val) {
    _left_child = -1;
    _info.leaf_value = leaf_val;
}

float XGBNode::leaf_value() const {
    return _info.leaf_value;
}

float XGBNode::split_value() const {
    return _info.split_value;
}

const std::string& XGBNode::get_split_key() const {
    return _fea_name;
}

int XGBNode::get_split_feature_index() const {
    return _fea_index;
}

float XGBNode::get_split_value() const {
    return _info.split_value;
}

float XGBNode::get_leaf_value() const {
    return _info.leaf_value;
}

int XGBNode::left() const {
    return _left_child;
}

int XGBNode::right() const {
    return _right_child;
}

int XGBNode::node_index() const {
    return _index;
}

bool XGBNode::parse(const std::string& string_in) {
    // format:
    // leafnode
    //  idx:leaf=float_value
    // normal_node
    //  idx:[feature_name<float_value] yes=left_idx,no=right_idx,missing=missing_idx
    const char* src = string_in.c_str();
    // skip the blank characters
    while(*src != 0 && isspace(*src)) {
        ++src;
    }
    if (*src == 0) {
        return false;
    }

    // get the index of the node
    _index = atoi(src);
    // find ":"
    while (*src != 0 && *src != ':') {
        ++src;
    }
    if (*src != ':') {
        return false;
    }
    ++src;

    if (strncmp(src, "leaf", 4) == 0) { // leaf
        _left_child = -1;
        src += 4;
        if (*src != '=') {
            return false;
        }
        ++src;
        _info.leaf_value = atof(src);

        return true;
    } else if (*src == '[') { // normal node
        ++src;
        // find '<'
        const char* less_mark = src;
        while (*less_mark != 0 && *less_mark != '<') {
            ++less_mark;
        }
        if (*less_mark == 0) {
            return false;
        }
        _fea_index = atoi(src);
        src = less_mark + 1;
        // get split value
        _info.split_value = atof(src);
        // find ']'
        while (*src != 0 && *src != ']') {
            ++src;
        }
        if (*src == 0) {
            return false;
        }
        ++src;
        // find "yes="
        const char* yes_ptr = strstr(src, "yes=");
        if (yes_ptr == NULL) {
            return false;
        }
        _left_child = atoi(yes_ptr + 4);
        // find "no="
        const char* no_ptr = strstr(yes_ptr + 4, "no=");
        if (no_ptr == NULL) {
            return false;
        }
        _right_child = atoi(no_ptr + 3);
        
        return true;
    }

    return false;
}

void XGBNode::dump(std::stringstream& sout) const {
    sout << _index << ':';
    if (is_leaf()) {
        sout << "leaf=" << _info.leaf_value << ",left=" << _left_child <<",right=" << _right_child << std::endl;
    } else {
        sout << '[' 
            << _fea_index << '<'
            << _info.split_value  << "] "
            << "yes=" << _left_child
            << ",no=" << _right_child << std::endl;;
    }
}

std::string XGBNode::dump() const {
    std::stringstream ss;
    dump(ss);

    return ss.str();
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
