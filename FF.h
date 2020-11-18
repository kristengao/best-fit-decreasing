//
// Created by 高萌萌 on 2020/11/17.
//
#include "commonFunction.h"
#ifndef BIN_PACKING_PROBLEM_FF_H
#define BIN_PACKING_PROBLEM_FF_H


class FF : public commonFunction{
public:
    bool init(){
        cout<<"Method FirstFit init:\n";
        commonFunction::init();
    }
    void Output(vector<Box_t>& v){
        cout<<"Method FirstFit Output:\n";
        commonFunction::Output(v);
    }
      void InsertBox(vector<int> v,int iBoxSize) override;
};


#endif //BIN_PACKING_PROBLEM_FF_H
