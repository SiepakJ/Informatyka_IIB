#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main(){

    int ilosc, mini, maxi;
    srand(time(NULL));
    cout<<"Podaj ilosc: ";
    cin>>ilosc;
    cout<<"Podaj minimalny zakres: ";
    cin>>mini;
    cout<<"Podaj maksymalny zakres: ";
    cin>>maxi;
    for(int i = 0; i < ilosc; i++){
    cout<<mini+rand()%(maxi-mini+1)<<"\n";
    }
    return 0;
}
