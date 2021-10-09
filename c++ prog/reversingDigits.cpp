#include <iostream>
using namespace std;

int main()
{
    int a,b,rev=0;
    cout<<"enter the number to be reversed ";
    cin>>a;
    while(a>0)
    {
        b=a%10;
        a/=10;
        rev=rev*10+b;
    }
    cout<<"the reverse number is "<<rev;
    return 0;
}