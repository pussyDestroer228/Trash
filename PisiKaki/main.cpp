#include "Chmon.h"

void problem(int );

int main() {

    int res;
    introduction();
    opinion1();
    opinion2();
    res = wannaPrint();
    guestion(res);

    return 0;
}

void problem(int inp){
    if (inp == 2){
        fknComedy();
    } else  {
        shutnik();
    }
}
