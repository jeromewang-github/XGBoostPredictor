/***************************************************************************
/**
 * @file xgb_forest.cpp
 * @date 2017/05/23 19:45:33
 * @brief 
 *  
 **/

#include "XGBForest.h"
#include "XGBConfig.h"
#include <math.h>

bool XGBForest::parse(const std::string& string_in) {
    std::stringstream sin(string_in);
    std::stringstream ss;
    std::string line;

    while (getline(sin, line)) {
        if (line.find("booster[") != std::string::npos) {
            const std::string tree_cont = ss.str();
            if (!tree_cont.empty()) {
                _trees.push_back(XGBTree());
                if (!_trees.back().parse(tree_cont)) {
                    _trees.pop_back();
                    return false;
                }
            }
            ss.str("");
        } else {
            ss << line << std::endl;
        }
    }

    // parse the last xgbtree
    const std::string tree_cont = ss.str();
    if (!tree_cont.empty()) {
        _trees.push_back(XGBTree());
        if (!_trees.back().parse(tree_cont)) {
            _trees.pop_back();
            return false;
        }
    }

    _ready = true;
    return true;
}

bool XGBForest::predict(const std::map<std::string, float>& fea, float threshold, int* pred) const {
    float prob = 0.0;
    if (!predict_prob(fea, &prob)) {
        return false;
    }

    if (prob > threshold) {
        *pred = 1;
    } else {
        *pred = 0;
    }

    return true;
}

bool XGBForest::predict_prob(const std::map<std::string, float>& fea, float* pred) const {
    if (pred == NULL) {
        return false;
    }
    *pred = 0.0;

    // add the value of the leaves in each tree
    size_t trees_num = get_trees_num();
    float prob = 0.0;
    for (size_t sz = 0; sz < trees_num; ++sz) {
        if (_trees[sz].predict(fea, &prob)) {
            *pred += prob;
        } else {
            return false;
        }
    }

    // process with logistic function
    *pred = 1.0 / (1 + exp(-*pred));

    return true;
}

bool XGBForest::predict(const float* fea, int fea_num, float threshold, int* pred) const {
    float prob = 0.0;
    if (!predict_prob(fea, fea_num, &prob)) {
        return false;
    }

    if (prob > threshold) {
        *pred = 1;
    } else {
        *pred = 0;
    }

    return true;
}

bool XGBForest::predict_prob(const float* fea, int fea_num, float* pred) const {
    if (pred == NULL) {
        return false;
    }
    *pred = 0.0;

    // add the value of the leaves in each tree
    size_t trees_num = get_trees_num();
    float prob = 0.0;
    for (size_t sz = 0; sz < trees_num; ++sz) {
        if (_trees[sz].predict(fea, fea_num, &prob)) {
            *pred += prob;
        } else {
            return false;
        }
    }

    // process with logistic function
    *pred = 1.0 / (1 + exp(-*pred));

    return true;
}

void XGBForest::dump(std::stringstream& sout) const {
    for (size_t sz = 0; sz < get_trees_num(); ++sz) {
        sout << "booster[" << sz << "]:" << std::endl;
        _trees[sz].dump(sout);
    }
}

std::string XGBForest::dump() const {
    std::stringstream ss;
    dump(ss);

    return ss.str();
}

size_t XGBForest::get_trees_num() const {
    return _trees.size();
}

bool XGBForest::load_default_model(XGBForest* model) {
    if (model == NULL) {
        return false;
    }

    return (model->parse(XGB_MODEL_STR));
}

bool XGBForest::model_ready() const {
    return _ready;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
