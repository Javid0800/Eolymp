#include <iostream>
using namespace std;

int main()
{
    int a,b,i,i1,r;
    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        i1=i;
        bool allOdd = true;

        while(0<i1)
        {
            r=i1%10;
            if(r%2==0)
            {
                allOdd = false;
                break;
            }
            i1/=10;
        }

        if(allOven)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

//veya

#include <iostream>
using namespace std;

int main()
{
    int a, b, i, i1;
    cin>>a>>b;
    
    for (i=a; i<=b; i++)
    {
        i1=i;
        while(0<i1 && (i1%10)%2!=0)
        {
            i1/=10;
        }
        if(i1==0)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}
