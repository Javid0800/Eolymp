#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\x23"; // # karakterinin hex kodu 23
      //cout << '\43'; // # karakterinin octal kodu 43
      //cout << static_cast<char>(35); // # karakterinin ASCII kodu 35
    }
    return 0;
}

// veya 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"#";
    }
    return 0;
}
