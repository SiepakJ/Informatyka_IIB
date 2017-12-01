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
    for(i=x;i<=y;i++){
        if(i%2!=0&&i!=y)
            cout<<i<<", ";
    }
    return 0;
}
