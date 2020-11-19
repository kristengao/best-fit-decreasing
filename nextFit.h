//
// Created by 高萌萌 on 2020/11/17.
//
#include "commonFunction.h"
#ifndef BIN_PACKING_PROBLEM_NEXTFIT_H
#define BIN_PACKING_PROBLEM_NEXTFIT_H


class nextFit :public commonFunction{
public:
    bool init()override {
        cout<<"Method nextFit init:\n";
        commonFunction::init();
    }
    void Output(vector<Box_t>& v){
        cout<<"Method nextFit Output:\n";
        commonFunction::Output(v);
    }
     virtual void InsertBox(vector<int> v,int iBoxSize);
};


#endif //BIN_PACKING_PROBLEM_NEXTFIT_H
