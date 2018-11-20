#include<iostream>
using namespace std;
int main()
{
    int trip,gas;
    double trip1=0;
    double mpg=0;
    while(trip!=-1)

    {
        cout<<"Enter miles driven:";
        cin>>trip;
        cout<<"Enter gallens you uesd: ";
        cin>>gas;
        cout<<endl<<"Mpg this trip :"<<trip/gas;
        trip1=trip1+trip;
        mpg+=gas;
        cout<<endl<<"Total MPG: "<<trip1/mpg<<endl;
    }
}
