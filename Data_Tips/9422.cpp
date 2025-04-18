#include <iostream>
using namespace std;

int main()
{   
    int abcd,a,b,c,d;
    cin>>abcd;
    a=abcd/1000;
    b=abcd/100%10;
    c=abcd/10%10;
    d=abcd%10;
    cout<<d*1000+b*100+c*10+a;
    return 0;
}
