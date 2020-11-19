//
// Created by 高萌萌 on 2020/11/17.
//

#include "commonFunction.h"
void commonFunction::Output(const vector<Box_t> &v) {
    for(int i=0;i<v.size();i++){
        cout<<"第"<<i+1<<"个箱子的物品分别是\n";
        for(int j=0;j<v[i].items.size();j++){
            cout<<v[i].items[j]<<"\t";
        }
        cout<<endl;
    }
}

bool commonFunction::init() {
    //cout<<"commonFunction::init\n";
    cout<<"请输入箱子大小\n";
    int iBoxSize;
    cin>>iBoxSize;
    if(iBoxSize<1){
        cout<<"please input the right size!\n";
        return false;
    }
    cout<<"请输入物品数量\n";
    int iItem;
    cin>>iItem;
    if(iItem<1){
        cout<<"please input the right size\n";
        return false;
    }
    vector<int> v;
    int tmp;
    for(int i=0;i<iItem;i++){
        cout<<"请输入第"<<i+1<<"个值"<<endl;
        cin>>tmp;
        if(tmp<1||tmp>iBoxSize) {
            cout<<"请输入合法值！";
            i--;
            continue;
        }
        v.push_back(tmp);
    }
    InsertBox(v,iBoxSize);
    return true;
}
