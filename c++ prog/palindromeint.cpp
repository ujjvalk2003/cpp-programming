#include <iostream>
using namespace std;

int main()
{
    int a,b,rev=0,m;
    cout<<"enter the number to check if it is palindrome";
    cin>>a;
    m=a;
    while(a>0)
    {
        b=a%10;
        a/=10;
        rev=rev*10+b;
    }
    if(rev==m)
        cout<<"yes it is a palindrome";
    else
        cout<<"it is not a palindrome";
    return 0;
}