// An exercise in Chapter 11: Pointers

#include <iostream>
using namespace std;

void splitTime(long, int *, int *, int *);

void splitTime(long totalSec, int *h, int *m, int *s){
    *h = totalSec / 3600;
    *m = totalSec / 60;

    while (*m >= 60){
        *m -= 60;
    }

    *s = totalSec - ((*h * 3600 ) + (*m * 60));
}

int main(){

    int h = 0;
    int m = 0;
    int s = 0;

    splitTime(3750, &h, &m, &s);
    cout << h << " hour(s) " << m << " minute(s) " << s << " second(s)" <<endl;

    return 0;
}