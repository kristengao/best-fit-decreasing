//
// Created by 高萌萌 on 2020/11/17.
//

#include "nextFit.h"
void nextFit::InsertBox(vector<int> v, int iBoxSize) {
    vector<Box_t> vtBox;//箱子
    int idx=-1;
    //vtBox[0].remainder=iBoxSize;

    for  ( unsigned  int  k = 0; k < v.size(); k++ )
    {
        int  tmp = v[ k ];
        //bool  bInsert =  false ;

        if  (idx>-1&&vtBox[idx].remainder >= tmp){
            vtBox[ idx ].remainder -= tmp;
            //bInsert =  true ;
            vtBox[ idx ].items.push_back( tmp );
            continue ;
        }

        else {
            Box_t box;
            box.items.push_back(tmp);
            box.remainder = iBoxSize - tmp;
            vtBox.push_back(box);
            idx++;
        }
    }
    Output( vtBox );
}
