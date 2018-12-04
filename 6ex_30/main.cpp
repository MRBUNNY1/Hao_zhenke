#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    cout << "给定数：" << x << endl;
    while (x!=0)
    {
        sum = sum*10 + x % 10;
        x /= 10;
    }

    cout << "逆序数值： " << sum << endl;


}
