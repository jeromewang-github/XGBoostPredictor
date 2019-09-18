/***************************************************************************
/**
 * @file xgb_forest.h
 * @date 2017/05/23 19:45:28
 * @brief 
 *  
 **/

#ifndef  XGB_FOREST_H
#define  XGB_FOREST_H

#include <vector>
#include <string>
#include <map>
#include <sstream>
#include "XGBTree.h"

class XGBForest {
public:
    XGBForest() :_ready(false) {}
    bool parse(const std::string& string_in);
    bool predict(const std::map<std::string, float>& fea, float threshold, int* pred) const;
    bool predict_prob(const std::map<std::string, float>& fea, float* pred) const;
    bool predict(const float* fea, int fea_num, float threshold, int* pred) const;
    bool predict_prob(const float* fea, int fea_num, float* pred) const;
    void dump(std::stringstream& sout) const;
    std::string dump() const;
    size_t get_trees_num() const;
    static bool load_default_model(XGBForest* model);
    bool model_ready() const;

private:
    std::vector<XGBTree> _trees;
    bool _ready;
}; // class XGBForest

#endif  //XGB_FOREST_H

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
