#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
    string symbol;
    int i, j, wiersze, ilosc;
    cout<<"Podaj ilosc wierszy: ";
    cin>>wiersze;
    cout<<"Ile symboli: ";
    cin>>ilosc;
    cout<<"Podaj symbol: ";
    cin>>symbol;
    for(i=1; i<=wiersze; i++){
        for (j=1; j<=ilosc; j++){
            cout<<symbol<<" ";
        }
    cout<<endl;
    }
    return 0;
}
