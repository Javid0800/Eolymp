#include <iostream>
using namespace std;
int main()
{
    int saat,deq,m;
    cin>>m;
    
    saat = m / 60;
    deq = m-(60*saat);
    cout<<saat<<" "<<deq<<endl;
    
    return 0;
}
