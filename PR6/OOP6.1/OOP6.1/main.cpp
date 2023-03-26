#include<cmath>
#include<iostream>
#include"Cone.h"
#include <iostream>
#include "cone.h"
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	Cone m[2];
	double x, y, z, R, h, r;
	for (i = 0; i < 2; i++) {
		cout << "¬ведите x, y, z, радиус и высоту конуса через пробел: ";
		cin >> m[i];
		cout << m[i];
	}

	Truncated first;
	cout << "«начение усеченного конуса равны: ";
	cout << first;
}
