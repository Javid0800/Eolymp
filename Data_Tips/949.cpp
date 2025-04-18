#include <iostream>
using namespace std;
int main()
{
    int abcd,b,c;
    cin>>abcd;
    b=abcd/100%10;
    c=abcd/10%10;
    cout<<b*10+c<<endl;   
    return 0;
}
