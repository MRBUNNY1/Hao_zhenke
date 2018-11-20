#include<iostream>
using namespace std;

int main() {
	float maoli, shouru;
	while (maoli!=-1)
    {
        cout<<"Enter sales in dollors (-1 to end)";
		cin >> maoli;
		shouru = 200 + maoli*0.09;
		cout << "Salary is:$" << shouru << endl<<endl;
	}
	return 0;
	}
