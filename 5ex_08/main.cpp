#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int c=9999;
    int b=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(c<b)
        c=c;
        else
        c=b;
    }
    cout<<c;
}
