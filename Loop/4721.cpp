#include <iostream>
using namespace std;

int main()
{
    int a,n,say;
    cin>>a;
    while(0<a)
    {
        n=a%10;
        if(n==5)
        say++;
        a/=10;
    }
    cout<<say;
    return 0;
}
