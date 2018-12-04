#include <iostream>

using namespace std;

int main()
{
   int Car;
   double hours,hours1,hours2,hours3;
   double charge,charge1,charge2,charge3;
   cin>>hours1>>hours2>>hours3;

   cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charge"<<endl;
   if(hours1<3)
   charge1=2;
   else
   charge1=2+(hours1-3)*0.5;
   cout<<"1"<<"\t"<<"hours1"<<"\t"<<charge1<<endl;

   if(hours2<3)
   charge2=2;
   else
   charge2=2+(hours2-3)*0.5;
   cout<<"2"<<"\t"<<"hours2"<<"\t"<<charge2<<endl;

   if(hours3<3)
   charge3=2;
   else
   charge3=2+(hours2-3)*0.5;
   cout<<"3"<<"\t"<<"hours3"<<"\t"<<charge3<<endl;

   hours=hours1+hours2+hours3;
   charge+charge1+charge2+charge3;
   cout<<"TOTAL"<<"\t"<<hours<<"\t"<<charge<<endl;
}
