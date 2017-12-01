#include <iostream>

using namespace std;

int main()
{
    int i=-3;
    cout<<"(";
    for (i;i<25;i=i+3){
        if(i!=3&&i!=18&&i!=24&&i%2!=0)
        cout<<i<<", ";
    }
    cout<<")";
    return 0;
}
