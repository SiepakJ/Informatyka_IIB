#include <iostream>

using namespace std;

int main()
{
    int i=-3;
    for (i;i<25;i=i+3){
        if(i!=3&&i!=18&&i!=24)
        cout<<i<<", ";
        if (i==24)
            cout<<i;
    }
    return 0;
}
