cmake_minimum_required(VERSION 3.15)
project(bin_packing_problem)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        BFD.h						//*号对应具体的文件名
        BFD.cpp
        commonFunction.cpp
        commonFunction.h
        bestFit.cpp
        bestFit.h
        FF.cpp
        FF.h
        nextFit.cpp
        nextFit.h
        )
add_executable(bin_packing_problem main.cpp ${SOURCE_FILES} ${SOURCES})


