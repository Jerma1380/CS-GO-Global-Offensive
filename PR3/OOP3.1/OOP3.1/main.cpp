#include<iostream>
#include<cmath>
#include"eq2.h"
#include<locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	eq2 A(0, 0, 0);
	eq2 B(0, 0, 0);
	eq2 C(0, 0, 0);
	
	double a, b, c, x1;

	cout << "¬ведите значени€ a, b и c квадратного уравнени€ A через пробел: " << endl;
	cin >> a >> b >> c;
	A.set(a, b, c);
	A.find_X();
	cout << "¬ведите значение x квадратного уравнени€ A: " << endl;
	cin >> x1;
	cout << "Y = " << A.find_Y(x1) << endl;

	cout << "¬ведите значени€ a, b и c квадратного уравнени€ B через пробел: " << endl;
	cin >> a >> b >> c;
	B.set(a, b, c);
	B.find_X();
	cout << "¬ведите значение x квадратного уравнени€ B: " << endl;
	cin >> x1;
	cout << "Y = " << B.find_Y(x1) << endl;
}