#include <iostream>

using namespace std;

main()
{
    double s=0, a=0;
    cout<<"W celu podania wyniku podaj liczbe rzeczywista <=50"<<endl;
    do{
        s+=a;
        cout<<"Podaj liczbe rzeczywista ";
        cin>>a;
    }
    while(a<=50);
    cout<<"suma liczb rzeczywistych = "<<s;
    return 0;
}
