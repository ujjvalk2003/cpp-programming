#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"enter the day" ;
    cin>>day;
    switch(day)
    {
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tue";
            break;
        default:
            cout<<"condition invalid";
    }
    return 0;
}