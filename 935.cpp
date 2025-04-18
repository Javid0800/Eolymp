#include <iostream>
using namespace std;

int main()
{
    int abc,a,b,c;
    cin>>abc;
    if(abc<0){abc*=-1;}
    a=abc/100;
    b=abc/10%10;
    c=abc%10;
    cout<<a<<"\n"<<b<<"\n"<<c;
    return 0;
}
