{\rtf1\ansi\ansicpg1252\cocoartf2636
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf0 \expnd0\expndtw0\kerning0
#include <iostream>\
#include <Array.hpp>\
\
#define MAX_VAL 750\
int main(int, char**)\
\{\
    Array<int> numbers(MAX_VAL);\
    int* mirror = new int[MAX_VAL];\
    srand(time(NULL));\
    for (int i = 0; i < MAX_VAL; i++)\
    \{\
        const int value = rand();\
        numbers[i] = value;\
        mirror[i] = value;\
    \}\
    //SCOPE\
    \{\
        Array<int> tmp = numbers;\
        Array<int> test(tmp);\
    \}\
\
    for (int i = 0; i < MAX_VAL; i++)\
    \{\
        if (mirror[i] != numbers[i])\
        \{\
            std::cerr << "didn't save the same value!!" << std::endl;\
            return 1;\
        \}\
    \}\
    try\
    \{\
        numbers[-2] = 0;\
    \}\
    catch(const std::exception& e)\
    \{\
        std::cerr << e.what() << '\\n';\
    \}\
    try\
    \{\
        numbers[MAX_VAL] = 0;\
    \}\
    catch(const std::exception& e)\
    \{\
        std::cerr << e.what() << '\\n';\
    \}\
\
    for (int i = 0; i < MAX_VAL; i++)\
    \{\
        numbers[i] = rand();\
    \}\
    delete [] mirror;//\
    return 0;\
\}}