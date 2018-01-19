#include <iostream>

using namespace std;
int n, x;

int main()
{
    cout<<"Podaj ostani wyraz ciagu: ";
    cin>>x;
    n=4;
    cout<<"(";
    for(n; n<=x; n=n+3){
        if(n!=x){
            cout<<n<<", ";
        }else{
            cout<<"...";
            cout<<")";
        }
    }
    return 0;
}
