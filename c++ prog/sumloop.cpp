#include <iostream>
using namespace std;

int main()
{
    int sum=0,n;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of "<<n<<" natural numbers is "<<sum;
    return 0;
}