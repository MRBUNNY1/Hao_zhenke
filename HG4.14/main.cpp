#include<iostream>
using namespace std;

class Account {
public:
	int account;
	double balance;
	double charge;
	double credits;
	double limit;
	Account(int);
};

Account::Account(int n) {
	account = n;

int main()
{
	int n;
	double newbalance;
	while (cout<<"Enter account number(or -1 to quit):") {
		cin >> n;
		if (n == -1)
        Account *a = new Account(n);
		cout << "Enter beginning balance:";
		cin >> a->balance;
		cout << "Enter total charges:";
		cin >> a->charge;
		cout  << "Enter total credits:";
		cin >> a->credits;
		cout  << "Enter credit limit:";
		cin >> a->limit;
		newbalance = a->balance + a->charge - a->credits;
		if (newbalance > a->limit) {
			cout << "New balance is " << newbalance << endl;
			cout << "Account:	" << a->account << endl;
			cout << "Credit limit:	" << a->limit << endl;
			cout << "Balance:	" << newbalance << endl;
			cout << "Credit Limit Exceeded"<<endl<<endl;
		}
		else {
			cout << "New balance is " <<  newbalance << endl;
		}

	}
	return 0;
}
