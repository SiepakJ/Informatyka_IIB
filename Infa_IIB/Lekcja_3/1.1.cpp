#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;
//Sprawdzanie liczby parzysta lub nieparzysta
//
int main()
{
    int a;
    cout<<"Podaj liczbe";
    cin>>a;
    if(a%2==0){
        cout<<"Liczba jest parzysta";
            }else{
        cout<<"Liczba jest nieparzysta";}
    return 0;
}
