#include <iostream>

using namespace std;
int n, x, y;

int main()
{
    cout<<"Podaj pierwszy wyraz ciagu: ";
    cin>>x;
    cout<<"Podaj drugi wyraz ciagu: ";
    cin>>y;
    cout<<"Podaj warunek: ";
    cin>>n;
    cout<<"(";
    for(n; n<=x; n=n+x){
        if(n!=x){
            cout<<n<<", ";
        }else{
            cout<<"...";
            cout<<")";
        }
    }
    return 0;
}
