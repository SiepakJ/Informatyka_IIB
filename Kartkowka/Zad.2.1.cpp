#include <iostream>

using namespace std;


/*int i=-3;
    cout<<"(";
    for (i;i<25;i=i+3){
        if(i!=3&&i!=18&&i!=24&&i%2!=0)
        cout<<i<<", ";
    }
    cout<<")";
    return 0;
    */

int main()
{
    int x, y, i;
    cout<<"Podaj wartosc poczatkowa"<<endl;
    cin>>x;
    cout<<"Podaj wartosc koncowa"<<endl;
    cin>>y;
    if (y%2==0){
        y--;
    }
    for(i=x;i<=y;i++){
        if(i%2!=0){
            if(i!=y)
            cout<<i<<", ";
        else
            cout<<i<<". ";
        }
    }
    return 0;
}
