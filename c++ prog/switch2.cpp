#include <iostream>
using namespace std;

int main()
{
    int option,a,b,c;
    cout<<"enter the operation you want"<<endl;
    cout<<"1. add\n"<<"2. sub\n"<<"3. multiply\n"<<"4. div\n";
    cin>>option;
    cout<<"enter the numbers to be operated";
    cin>>a>>b;
    switch(option)
    {
        case 1:
            c=a+b; 
            break;       
        case 2:
            c=a-b;
            break;            
        case 3:
            c=a*b;
            break;            
        case 4:
            c=a/b; 
            break;
        default:
            cout<<"invalid option bitch";              
    }
    cout<<"result is "<<c<<endl;
    return 0;
}