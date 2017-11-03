#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
    int i, j, x, ilosc;
    cout<<"Podaj ilosc wierszy: ";
    cin>>x;
    cout<<"Ile symboli: ";
    cin>>ilosc;
    for(i=1; i<=x; i++){
        for (j=1; j<=ilosc; j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}
