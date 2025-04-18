#include <iostream>
using namespace std;
int main()
{
    int ab,a,b;
    cin>>ab;
    a=ab/10;
    b=ab%10;
    cout<<a*1000+a*100+b*10+b<<endl;
    return 0;
}
