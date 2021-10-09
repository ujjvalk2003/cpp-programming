#include <iostream>
using namespace std;

int main()
{
    int multiply=1,n;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        multiply*=i;
    }
    cout<<"the factorial of "<<n<<" is "<<multiply;
    return 0;
}