#include <iostream>
using namespace std;

int main()
{
    int a[5],min;
    cout<<"enter the elements in the array ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    cout<<"the minimum number of the array is "<<min;
    return 0;
}