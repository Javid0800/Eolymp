#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int abcd,a,b,c,d;
    cin>>abcd;
    a=abcd/1000;
    b=abcd/100%10;
    c=abcd/10%10;
    d=abcd%10;
    cout<<pow(a+b+c+d,2)<<endl;
    return 0;
}
