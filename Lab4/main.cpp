#include "funs.h"
#include <iostream>
#include <cassert>
class massive{
    int *x;
    int len = 1024;
public:
    massive() {
        cout <<  len << " slots massive is created!" << endl;
        x = new int[len];
    }
    ~massive(){
        delete []x;
        cout << "massive of " << len << " is deleted!" << endl;
    }
    void setx(int index,int X){
        x[index] = X;
    }

    void prind(){
        for (int i = 0; i < len; ++i) {
            cout << "your massive:" << x[i] << endl;
        }
    }
};
int main()
{

   massive one;
   one.setx(1,123);
   system("pause");
   cout << sizeof one  << endl;

    return 0;
}
