#include <iostream>
using namespace std;
int main()
{
    int n,a,b,s,m,q;
    cin>>n>>a>>b;
    q = n - a;
    s = n - b;
    m = a - s;
    cout<<m<<" "<<q<<" "<<s<<endl;
    return 0;
}
