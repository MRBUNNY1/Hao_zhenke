#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  double x,y;
  cout<<"Enter a number";
  cin>>x;
  cout<<"number"<<x;

  int roundToInteger(x);
  {
      y=floor(x+0.5);
      cout<<"a"<<y<<endl;

  }
  int roundToTenths(x);
  {
      y=floor(x*10+0.5)/10;
      cout<<"b"<<y<<endl;

  }
  int roundToHundredths(x);
  {
      y=floor(x*100+0.5)/100;
      cout<<"c"<<y<<endl;
  }
  int roundToThousandths(x);
  {
      y=floor(x*1000+0.5)/1000;
      cout<<"d"<<y<<endl;
  }
}
