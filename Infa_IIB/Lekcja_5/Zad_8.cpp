#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
    int i, x, p, q;
    p=1;
    q=99;
    srand(time(NULL));
    x=1+rand()%(q-p+1);
    for  (x; x=1 ; i++){
        cout<<i<<"";
    }
    return 0;
}
