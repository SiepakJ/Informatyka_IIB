#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
    int x, y;
    cout<<"Podaj poczatek: ";
    cin>>x;
    cout<<"Podaj koniec: ";
    cin>>y;
    if (x<y){
        for(x; x<=y; x++){
            cout<<x<<" ";
        }
    }else{
        cout<<"Bledne dane!";
    }
    return 0;
}
