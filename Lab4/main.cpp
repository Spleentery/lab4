#include "funs.h"

int main()
{
    const int len = 3;

    figura *dyn = new figura[len]{
         figura(666,999),
         figura(),
         figura(69,69)
    };
    dyn[333] = figura(123,321);
    dyn[333].print();
    dyn[0].print();
    dyn[1].print();
    dyn[2].print();
    dyn[100] = figura(300,1200);
    dyn[20] = figura(200);
    dyn[20].print();
    delete []dyn;
    return 0;
}
