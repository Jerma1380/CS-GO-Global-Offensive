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

	cout << "������� �������� a, b � c ����������� ��������� A ����� ������: " << endl;
	cin >> a >> b >> c;
	A.set(a, b, c);
	A.find_X();
	cout << "������� �������� x ����������� ��������� A: " << endl;
	cin >> x1;
	cout << "Y = " << A.find_Y(x1) << endl;

	cout << "������� �������� a, b � c ����������� ��������� B ����� ������: " << endl;
	cin >> a >> b >> c;
	B.set(a, b, c);
	B.find_X();
	cout << "������� �������� x ����������� ��������� B: " << endl;
	cin >> x1;
	cout << "Y = " << B.find_Y(x1) << endl;
}