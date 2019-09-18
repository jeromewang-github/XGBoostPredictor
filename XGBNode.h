/***************************************************************************
/**
 * @file xgb_node.h
 * @date 2017/05/23 14:08:52
 * @brief 
 *  
 **/

#ifndef  XGB_NODE_H
#define  XGB_NODE_H

#include <string>
#include <sstream>

class XGBNode {
public:
    XGBNode();

    bool is_leaf() const;
    bool is_valid() const;
    void reset();
    void set_split(const std::string& fea_name, float split_val);
    void set_split(int fea_idx, float split_val);
    void set_leaf(float leaf_val);
    float leaf_value() const;
    float split_value() const;
    const std::string& get_split_key() const;
    int get_split_feature_index() const;
    float get_split_value() const;
    float get_leaf_value() const;
    int left() const;
    int right() const;
    int node_index() const;
    bool parse(const std::string& string_in);
    void dump(std::stringstream& sout) const;
    std::string dump() const;

private:
    union Info {
        float leaf_value;
        float split_value;
    };

private:
    const static int INVALID_FLAG = -2;
    std::string _fea_name;
    int _fea_index; // the index of feautre used to split
    int _index; // index of node
    int _left_child; //when _left_child == -1, the node is treatea as leaf
    int _right_child;
    Info _info;
};

#endif  //XGB_NODE_H

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
