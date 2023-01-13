//
// Created by Johannes Joujo on 2022-12-04.
//

#ifndef UNTITLED3_P_QUE_H
#define UNTITLED3_P_QUE_H


#include <iostream>
#include <vector>

template<typename T, typename Comp = std::less<>>
class p_que {
private:
    std::vector<T> v;

public:
    T pop();

    void puch(T e, Comp comp = Comp());

    int size();

    bool empty();
};

template<typename T, typename Comp>
T p_que<T, Comp>::pop() {
    auto temp = v.front();
    v.erase(v.begin());
    return temp;
}

template<typename T, typename Comp>
void p_que<T, Comp>::puch(T e, Comp comp) {
    v.push_back(e);
    std::sort(v.begin(), v.end(), comp);
}

template<typename T, typename Comp>
int p_que<T, Comp>::size() {
    return v.size();
}

template<typename T, typename Comp>
bool p_que<T, Comp>::empty() {
    return v.empty();
}

#endif //UNTITLED3_P_QUE_H
