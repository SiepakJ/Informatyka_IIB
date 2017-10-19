#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, n;
    cout<<"Wypisz a: "<<endl;
    cin>>a;
    cout<<"Wypisz b: "<<endl;
    cin>>b;
    cout<<"Wypisz c: "<<endl;
    cin>>c;
    cout<<"Wypisz d: "<<endl;
    cin>>d;
    if (a<b){
        n=a;
    }else{
        n=b;
    }
    if (a<c){
        n=a;
    }else{
        n=c;
    }
    if (a<d){
        n=a;
    }else{
        n=d;
    }
    cout<<"Najmniejsza z tych liczb to: "<<n<<endl;
}
