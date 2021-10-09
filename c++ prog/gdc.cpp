#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 nos";
    cin>>a>>b;
    while(a!=b)
    {
    if(a>b)    
        a=a-b;
    else
        b=b-a;    
    }
    cout<<b;
    return 0;
}