#include<iostream>
using namespace std;

class Polynomial {
private:
	int coe;
	int ind;
public:
	Polynomial(int coe1, int ind1) {
		this->coe = coe1;
		this->ind = ind1;
	}
	int getCoe() {
		return coe;
	}
	int getInd(){
		return ind;
	}
	~Polynomial() {
		cout << "Class has already been destroyed.";
	}
	Polynomial operator+(const Polynomial &a) {
		if (a.ind == this->ind) {
			this->coe = a.coe + this->coe;
		}
		else {
			return;
		}
	}
	Polynomial operator-(const Polynomial &a) {
		if (a.ind == this->ind) {
			this->coe = a.coe - this->coe;
		}
		else {
			return;
		}
	}
	Polynomial operator*(const Polynomial &a) {
		this->coe = this->coe*a.coe;
		this->ind = this->ind+a.ind;
	}
	Polynomial operator/(const Polynomial &a) {
		this->coe = this->coe/a.coe;
		this->ind = this->ind-a.ind;
	}
	Polynomial operator=(const Polynomial &a) {
		this->coe = a.coe;
		this->ind = a.ind;
	}
	Polynomial operator+=(const Polynomial &a) {
		this->coe = this->coe + this->coe;
	}
	Polynomial operator-=(const Polynomial &a) {
		this->coe = this->coe - this->coe;
	}
	Polynomial operator*=(const Polynomial &a) {
		this->coe = this->coe * this->coe;
		this->ind = this->ind + this->ind;
	}

};
int main() {
	return 0;
}
