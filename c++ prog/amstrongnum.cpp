#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,r,sum=0,m;
    cout<<"enter n ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        sum+=pow(r,3);
    }
    if(sum==m)
    {
        cout<<"it is an amstrong number";
    }
    else
    {
        cout<<"it is not an amstrong number";
    }
    return 0;
}