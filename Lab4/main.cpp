#include "funs.h"
using namespace std;

int main() {
  samochod cars[] = {{"Citroen", "rapid", 2016, "gray", 5},
                     {"Ford", "Mustang", 2012, "yellow", 7},
                     {"Ferrari", "F40", 1975, "Red"},
                     {"Ferrari", "F50", 1980, "yellow"},
                     {"Ford", "Focus", 2010, "darkblue"},
                     {"Ford", "Explorer", 2011, "white"},
                     {"Alpha Omega", "Romeo", 2008, "whitish gray"}};
    int N = sizeof(cars)/sizeof(cars[0]);
    printAllObjects(cars,N);
    printRepeating(cars,N);
    sortObjectsByYear(cars,N);
    return 0;
}
