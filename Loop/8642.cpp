#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,i,i1;
    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        if(pow(i/1000,4)+pow(i/100%10,4)+pow(i/10%10,4)+pow(i%10,4)==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

// veya

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,i,i1,arm,req;
    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        i1=i;
        arm=0;
        while(0<i1)
        {
            req=i1%10;
            arm+=pow(req,4);
            i1/=10;
        }
        if(arm==i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
