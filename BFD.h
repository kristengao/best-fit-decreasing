//
// Created by 高萌萌 on 2020/11/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "commonFunction.h"
#ifndef BIN_PACKING_PROBLEM_BFD_H
#define BIN_PACKING_PROBLEM_BFD_H
using namespace std;
class BFD: public commonFunction {
public:

    bool init(){
        cout<<"Method BFD init:\n";
        cout<<endl;
        commonFunction::init();
    }
    void Output(vector<Box_t>& v){
        cout<<"Method BFD Output:\n";
        commonFunction::Output(v);
    }
        // you are calling a function and trying to give the type of the parameters.所以不能加类型
        virtual void  InsertBox(vector<int> v,int iBoxSize);
};

#endif //BIN_PACKING_PROBLEM_BFD_H
