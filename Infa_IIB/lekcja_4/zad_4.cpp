#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    int x, p, q;
    p=1;
    q=30;
    srand(time(NULL));
    x=1+rand()%(q-p+1);
    cout<<"Prof. Jadwiszczok bedzie dzisiaj miazdzyl ucznia o numerze:  "<<x<<endl;
    return 0;
}
