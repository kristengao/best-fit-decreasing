#include <iostream>
//#include "commonFunction.h"
#include "FF.h"
#include "bestFit.h"
#include "nextFit.h"
#include "BFD.h"

int main() {
    BFD bfd;
    nextFit nf;
    FF ff;
    bestFit bf;
    commonFunction& cf=bfd;


    while  ( !cf.init() ){}
    system (  "pause"  );
    return  0;
}