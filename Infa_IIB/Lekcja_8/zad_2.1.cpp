#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
int ciag(int n){
if(n==1){
    return 4;
}else{
    return ciag (n-1)+3;
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
