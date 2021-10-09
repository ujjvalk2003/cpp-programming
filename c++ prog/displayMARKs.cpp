#include <iostream>
using namespace std;
typedef int marks; //I CREATED A TYPEDEF WHICH IS A USER DEFINED VARIABLE WHICH MAKES THE PROGRAM READABLE

int main()
{
    marks m1,m2,m3;
    int avg;
    cout<<"enter the 3 marks ";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;
    if(avg>=60)
    {
        cout<<"congo! you got an A grade ";
    }
    else if(avg>=35 && avg<60)
    {
        cout<<"congo! you got an B grade ";
    }
    else
    {
        cout<<"MACHUDA SAALE ";
    }
    return 0;

}