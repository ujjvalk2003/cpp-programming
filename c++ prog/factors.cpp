#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the number for which you want to print the factors";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"the factors of "<<n<<" is/are "<<i<<endl;
            sum+=i;           
        }        
    }    
    cout<<"the sum of the factors of "<<n<<" is "<<sum<<endl;
    if(n*2==sum)
        {
            cout<<"yes its a perfect number"<<endl;
        }
        else
        {
            cout<<"it is not a perfect number"<<endl;
        }
    return 0;
}