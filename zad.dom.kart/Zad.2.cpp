#include <iostream>

using namespace std;

    string haslo="zsk", haslouzyt;
    bool czyzg=false;
    int proba=1;

int main()
{
    cout<<"Podaj haslo: ";
    do{
        cin>>haslouzyt;
        if(haslouzyt==haslo){
            cout<<"Gratuluje, odgadles haslo za "<<proba<<" proba";
            czyzg=true;
            break;
        }else{
            cout<<"Bledne haslo! Podaj ponownie haslo: ";
        }proba++;
    }while(proba<=3);
    if(!czyzg)
        cout<<"NIE ODGADLES HASLA";
    return 0;
}
