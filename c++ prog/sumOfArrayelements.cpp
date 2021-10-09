#include <iostream>
using namespace std;

int main()
{
    int a[10],sum=0;
    cout<<"enter the elements in the array";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i:a)
    {
        sum+=i;
    }
    cout<<"the sum of the elements of the array is "<<sum;
    return 0;
}