#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        if(i/100!=i/10%10 && i/100!=i%10 && i/10%10!=i%10)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
