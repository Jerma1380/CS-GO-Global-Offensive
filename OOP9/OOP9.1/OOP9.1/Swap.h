#pragma once

#include <iostream>
using namespace std;

template <class S> 
void Swap(S& x, S& y) {
	S z = x;
	x = y;
	y = z;
}

template <class S> void OutXY(S& x, S& y) {
	cout << x << " " << y << "\n";
}

class Class1 {
	int a;
	float b;
public:
	Class1(int a, float b);
	void Out();
	Class1 operator = (Class1& S);
};
