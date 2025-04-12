#include <iostream>
using namespace std;
int main()
{
    int abc,a,b,c;
    cin>>abc;
    a=abc/100;
    b=abc/10%10;
    c=abc%10;
    cout<<c<<b<<a<<endl;
    return 0;
}
