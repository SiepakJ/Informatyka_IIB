#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, pom;
    cout<<"Podaj a"<<endl;
    cin>>a;
    cout<<"Podaj b";
    cin>>b;
    cout<<"Podaj c";
    cin>>c;
     najwieksza=a;
        if (b>najwieksza){
            najwieksza=b;
        }
        if (c>najwieksza){
            najwieksza=c;
        }
    cout<<endl<<"najwieksza l. wynosi "<<najwieksza;
    return 0;
}
