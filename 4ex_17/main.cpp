#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number;
    int largest;

    cout<<"input 10 numbers"<<endl;

    while(counter<10)
    {
        cin>>number;

        if(number>largest)
            largest=number;

        counter++;
    }
    cout<<"maximum"<<largest;
}

