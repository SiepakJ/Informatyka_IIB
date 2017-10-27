#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x, p, q;
    double y;
    p=1;
    q=30;
    srand(time(NULL));
    x=1+rand()%(q-p+1);
    if (x<1){
        y=x*2;
    }else{
    switch (x){
case 1:
    y=-10;
    break;
case 3:
    y=pow(x-1,4);
    break;
case 6:
    y=sqrt(x-4);
    break;
default:
    y=0;
    }
    cout<<"f{x}: "<<y<<endl;
    }
    return 0;
}
