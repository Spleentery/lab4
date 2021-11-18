//
// Created by David on 18.11.2021.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#ifndef MAIN_CPP_FUNS_H
#define MAIN_CPP_FUNS_H

struct samochod {
    string marka;
    string model;
    int rok;
    string color;
    int yearsOfExploitation;
};
void printRepeating (samochod* arr,int size);
void sortObjects(samochod* arr,int size);
void sortObjectsByYear(samochod* arr,int size);
void printAllObjects(samochod* arr, int size);
#endif //MAIN_CPP_FUNS_H
