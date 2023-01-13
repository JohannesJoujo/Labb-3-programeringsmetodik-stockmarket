//
// Created by Johannes Joujo on 2022-12-04.
//

#ifndef UNTITLED3_MALLKLASS_H
#define UNTITLED3_MALLKLASS_H

#include "p_que.h"


struct person {
    int value = 0;
    std::string name{};
};

struct compare {
    bool operator()(const person &lhs, const person &rhs) {
        return lhs.value < rhs.value;
    }
};

#endif // UNTITLED3_MALLKLASS_H
