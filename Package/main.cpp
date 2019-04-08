#include<iostream>
#include<string>
using namespace std;

class Package {
public:
	string s_name;
	string r_name;
	string address;
	string city;
	string state;
	string postCode;
	double weight;
	double price_perOZ;
	Package(string sname, string rname, string address, string city, string state, string postCode, double weight, double price_perOZ) {
		this->s_name = sname;
		this->r_name = rname;
		this->address = address;
		this->city = city;
		this->state = state;
		this->postCode = postCode;
		this->weight = weight;
		this->price_perOZ = price_perOZ;
	}
	double calculateCost() {
		return this->weight*this->price_perOZ;
	}
};
class TwoDayPackage :public Package {
private:
	double price_normalSend;
public:
	TwoDayPackage(double price, string sname, string rname, string address, string city, string state, string postCode, double weight, double price_perOZ) :Package(sname, rname,address,city,state, postCode,weight,price_perOZ) {
		this->price_normalSend = price;
	}
	double calculateCost() {
		return this->weight*this->price_perOZ + this->price_normalSend;
	}
};
class OvernightPackage:public Package{
private:
	double price_oveSend;
public:
	OvernightPackage(double price, string sname, string rname, string address, string city, string state, string postCode, double weight, double price_perOZ) :Package(sname, rname, address, city, state, postCode, weight, price_perOZ) {
		this->price_oveSend = price;
	}
	double calculateCost(){
		return this->weight*(this->price_perOZ + this->price_oveSend);
	}
};
int main() {
	string s_name = "daddy";
	string r_name = "son";
	string address= "qingdaodaxue";
	string city = "qingdao";
	string state = "shandong";
	string postcode = "123456";
	double weight = 100;
	double price = 200;
	double price_twoday = 10;
	double price_ove = 20;
	TwoDayPackage package_a(price_twoday, s_name, r_name, address, city, state, postcode, weight, price);
	OvernightPackage package_b(price_ove, s_name, r_name, address, city, state, postcode, weight, price);
	cout << package_a.calculateCost() << endl;
	cout << package_b.calculateCost() << endl;
	system("pause");
}
