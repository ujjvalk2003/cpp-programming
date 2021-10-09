#include <iostream>
using namespace std;

int main()
{
    int amt,disc;
    cout<<"enter the amt\n";
    cin>>amt;
    if(amt<100)
    {
        cout<<"no discount";
    }
    else if(amt>=100 && amt<500)
    {
        disc=(10*amt)/100;        
    }
    else 
    {
        disc=(20*amt)/100;
    }
    cout<<"the bill is\n"<<amt<<"\n"<<"and rthe total discount is\n"<<disc;
    return 0;
}