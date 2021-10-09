#include <iostream>
using namespace std;

int main()
{
    int n,ctr=0;
    cout<<"enter a prime number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ctr++;
        }
    }
        if(ctr==2)
        {
            cout<<"yes it is a prime number";
        }
        else
        {
            cout<<"it is not a prime number";
        }

    return 0;
}