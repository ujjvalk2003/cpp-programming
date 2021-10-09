#include <iostream>
using namespace std;

int main()
{
    int ncount=0,pcount=0,a[5];   
    cout<<"enter the elaments in array to check their sign ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
        
            ncount++;
        else
            pcount++;
    }
    cout<<"the number of -ve numbers are "<<ncount<<endl;    
    cout<<"the number of +ve numbers are "<<pcount<<endl;
    return 0;
}