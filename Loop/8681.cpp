#include <iostream>
using namespace std;

int main()
{
    int n,m,b=1;
    cin>>n;
    while(0<n)
    {   
        m=n%10;
        if(m!=0)
        b=b*m;
        n/=10;
    }
    cout<<b;
    return 0;
}
