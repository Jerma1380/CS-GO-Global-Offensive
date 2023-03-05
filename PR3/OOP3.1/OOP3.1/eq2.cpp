#include<iostream>
#include<cmath>
#include"eq2.h"


using namespace std;

eq2 operator + (eq2& first, eq2& second) {
	eq2 temp(0, 0, 0);
	temp.set(first.a + second.a, first.b + second.b, first.c + second.c);
	return temp;
}

eq2::eq2(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b1 * b1 - 4 * a1 * c1;
}
void eq2::set(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b1 * b1 - 4 * a1 * c1;
}
double eq2::find_X() {
	D = b * b - 4 * a * c;
	if (D > 0) {
		double x1 = (-b + sqrt(D)) / 2 * a;
		double x2 = (-b - sqrt(D)) / 2 * a;
		cout << "Больший x равен: " << max(x1, x2) << endl;
		return max(x1, x2);
	}
	else if (D == 0) {
		double x = -b / 2 * a;
		cout << "x равен: " << x << endl;
		return x;
	}
	else {
		cout << "Корней нет." << endl;
	}
}
double eq2::find_Y(double x1) {
	return a* x1* x1 + b * x1 + c;
}