#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int a, b, c;

int main()
{
    srand(time(NULL));
    cout<<"Trzy wylosowane liczby to: "<<endl;
    a=rand();
    cout<<a<<","<<endl;
    b=rand();
    cout<<b<<","<<endl;
    c=rand();
    cout<<c<<","<<endl;
    cout<<"Najwieksza liczba to: ";
    if(a<b){
        if(b>c)
        cout<<b;
    }else{
        cout<<c;
    }if(a>c)
    cout<<a;
    return 0;
}
