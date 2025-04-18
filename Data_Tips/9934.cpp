#include <iostream>
using namespace std;
int main()
{
    int a,saat,deq,saniye;
    cin>>a;
    saat = a / 3600;
    deq = (a % 3600) / 60;
    saniye = a - (saat*3600) - (deq*60) ;
    cout<<saat<<" "<<deq<<" "<<saniye<<endl;
    return 0;
}
