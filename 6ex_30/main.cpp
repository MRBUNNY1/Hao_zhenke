#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    cout << "��������" << x << endl;
    while (x!=0)
    {
        sum = sum*10 + x % 10;
        x /= 10;
    }

    cout << "������ֵ�� " << sum << endl;


}
