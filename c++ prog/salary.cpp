#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float basic,allowances,ded,nets;
    cout<<"enter the basic salary and allowances and deductions ";
    cin>>basic>>allowances>>ded;
    nets=basic+(basic*allowances)/100-(basic*ded)/100;
    cout<<"the net salary is "<<nets<<endl;
    return 0;

}