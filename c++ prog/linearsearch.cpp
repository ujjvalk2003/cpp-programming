#include <iostream>
using namespace std;

int main()
{
    int a[10],key;
    cout<<"enter the value you want to check in the array"<<endl;
    cin>>key;
    cout<<"enter the elements of the array ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        if(key==a[i])
        {
            cout<<"the element is found at the index "<<i;
            return 0;
        }
    }
    cout<<"index not found";
}