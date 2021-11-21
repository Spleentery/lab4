//
// Created by David on 18.11.2021.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#ifndef MAIN_CPP_FUNS_H
#define MAIN_CPP_FUNS_H

class figura{
    int x;
    int y;
public:

figura(int X, int Y){
    x = X;
    y = Y;
}
figura(){
    x = 1;
    y = 2;
}
figura(int X){
    x = X;
    y = 2;
}

    void print(){
        cout << "wierzcholek I: " << x << ",  wierzcholek II: " << y << endl;
    }
    int getx(){
    return x;
}
    int gety(){
    return y;
}
};

#endif //MAIN_CPP_FUNS_H
