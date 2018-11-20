#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=10;
    double c;
    while(0<a<=40)
    {
     cout<<"Enter hours worked (-1 to end):";
     cin>>a;
     cout<<"Enter hourly rate of the employee($00.00):";
     cin>>b;
     cout<<"salary is $"<<a*b<<endl;
    }
     cout<<"Enter hours worked (-1 to end):";
     cin>>a;
     cout<<"Enter hourly rate of the employee($00.00):";
     cin>>b;
     cout<<"salary is $"<<40*10+(a-40)*15<<endl;
}
