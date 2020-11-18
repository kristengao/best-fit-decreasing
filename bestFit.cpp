//
// Created by 高萌萌 on 2020/11/17.
//

#include "bestFit.h"
void bestFit::InsertBox(vector<int> v, int iBoxSize) {
    vector<Box_t> vtBox;
    //sort( v.begin(), v.end(),large );  //物品从大到小排序
    for  ( unsigned  int  k = 0; k < v.size(); k++ )
    {
        int  tmp = v[ k ];
        bool  bInsert =  false ;
        for  ( unsigned  int  j = 0; j < vtBox.size(); j++ )
        {
            if  (vtBox[j].remainder >= tmp)
            {
                vtBox[ j ].remainder -= tmp;
                bInsert =  true ;
                vtBox[ j ].items.push_back( tmp );
                break ;
            }
        }
        if  (bInsert ==  false )
        {
            Box_t box;
            box.items.push_back(tmp);
            box.remainder = iBoxSize - tmp;
            vtBox.push_back( box );
        }
        sort( vtBox.begin( ), vtBox.end( ) ); //对箱子进行排序
    }

    Output( vtBox );
}