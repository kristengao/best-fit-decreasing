//
// Created by 高萌萌 on 2020/11/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#ifndef BIN_PACKING_PROBLEM_COMMONFUNCTION_H
#define BIN_PACKING_PROBLEM_COMMONFUNCTION_H
using namespace std;

class commonFunction {
public:
    struct Box_t{
        int remainder;
        vector<int> items;
        bool operator<(const Box_t& b) const{
            return this->remainder<b.remainder;
        }
    };
    bool static large(int &a,int& b ) {
        return a<b;
    }

    virtual  void InsertBox(vector<int> v,int iBoxSize)=0;
    virtual bool init();

    void Output(const vector<Box_t> &v);


};


#endif //BIN_PACKING_PROBLEM_COMMONFUNCTION_H
