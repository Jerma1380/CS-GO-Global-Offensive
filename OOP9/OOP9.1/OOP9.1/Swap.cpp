#include <iostream>
using namespace std;
#include "Swap.h"

Class1::Class1(int a, float b) {
	this->a = a;
	this->b = b;
}
void Class1::Out() {
	cout << a << " " << b << "\n";
}
Class1 Class1::operator = (Class1& S){
	a = S.a;
	b = S.b;
	return *this;
}