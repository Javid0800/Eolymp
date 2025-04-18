#include <iostream>
using namespace std;
int main()
{
    int a,gun,saat,deq,saniye;
    cin>>a;
    gun = a / 86400;
    saat = (a % 86400)/3600;
    deq = (a % 86400 % 3600)/60;
    saniye = (a % 86400 % 3600 % 60);
    cout<<gun<<" "<<saat<<" "<<deq<<" "<<saniye<<endl;
    return 0;
}
