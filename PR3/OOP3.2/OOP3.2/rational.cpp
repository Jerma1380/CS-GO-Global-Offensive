#include<iostream>
#include<cmath>
#include"rational.h"

using namespace std;

rational::rational(int a1, int b1) {
	a = a1;
	b = b1;
	if (b != 0) {
		while (b % a == 0 && a > 1) {
			b = b / a;
			a = a / a;
		}
		while (a > b) {
			a = a % b;
		}
	}
	else {
		cout << "Знаменатель равен 0." << endl;
	}
}
void rational::set(int a1, int b1) {
	a = a1;
	b = b1;
	if (b != 0) {
		while (b % a == 0 && a > 1) {
			b = b / a;
			a = a / a;
		}
		while (a > b) {
			a = a % b;
		}
	}
	else {
		cout << "Знаменатель равен 0." << endl;
	}
}
void rational::show() {
	if (b != 0) {
		cout << a << "/" << b << endl;
	}
}
rational::rational() {

}