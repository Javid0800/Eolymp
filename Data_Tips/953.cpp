#include <iostream>

using namespace std;

int main()
{   long long abc,a,c;
    cin>>abc;
    a=abc/100;
    c=abc%10;

    cout<<c%a;
    return 0;
}
