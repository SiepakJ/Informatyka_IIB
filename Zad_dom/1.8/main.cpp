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
    if(a<b){
        n=a;
        if(a<c){
            n=a;
            if(a<d){
                n=a;
            }else{
                n=d;
            }
        }else{
            n=c;
            if(c<d){
                n=c;
            }else{
                n=d;
            }
        }
    }else{
        n=b;
        if(b<c){
            n=b;
            if(b<d){
                n=b;
            }else{
                n=d;
            }
        }else{
            n=c;
            if(c<d){
                n=c;
            }else{
                n=d;
            }
        }
    }
    cout<<"Najmniejsza z tych liczb to: "<<n<<endl;
}
