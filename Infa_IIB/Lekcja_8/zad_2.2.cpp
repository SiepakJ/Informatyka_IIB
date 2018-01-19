#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
int ciag(int n){
if(n==1){
    return 2;
}else{
    return ciag (n-1)*2;
}
}
int x;

int main()
{
    cout<<"Podaj wyraz ciagu: ";
    cin>>x;
    cout<<"Wywolujemy funkcje: ";
    cout<<ciag(x);
    return 0;
}
