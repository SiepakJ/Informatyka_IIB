#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, f;
    cout<<"Podaj X: "<<endl;
    cin>>x;
    if (x<1)
        f=2*x;
    else if (x=10)
        f=10;
    else if (x=3)
        f=pow(x-1,4);
    else if (x=6)
        f=sqrt(x-4);
    else
        f=0;
        cout<<"f(x)= "<<f<<endl;
    return 0;
}
