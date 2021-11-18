//
// Created by David on 18.11.2021.
//

#include "funs.h"
void printRepeating (samochod* arr,int size) {
    int i;
    cout << "repeating elements:" << endl;
    for (i = 0; i < size -1; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(arr[i].marka == arr[j].marka) {
                cout << arr[i].marka << "  ";
            }
        }
    }
    cout << "\n";
}
void sortObjects(samochod* arr,int size){
         sort(arr,arr+size,
          [](samochod const & a, samochod const & b) -> bool
          { return a.marka < b.marka; } );
     cout << "After sorting:\n";
        for (int i = 0; i < size; ++i) {
        cout << arr[i].marka << "\t" << arr[i].model << "\t" << arr[i].rok << "\t" << arr[i].color << "\t" << arr[i].yearsOfExploitation << endl;
    }
}

void sortObjectsByYear(samochod* arr,int size) {
    sort(arr,arr+size,
          [](samochod const & a, samochod const & b) -> bool
          { return a.rok < b.rok; } );
     cout << "Najnizszy rok produkcji:\n";

        cout << arr[0].rok  << endl;
}

void printAllObjects(samochod* arr, int size){
      cout << "marka\tmodel \tyear \tcolour" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i].marka << "\t" << arr[i].model << "\t" << arr[i].rok << "\t" << arr[i].color << "\t" << arr[i].yearsOfExploitation << endl;
    }
}