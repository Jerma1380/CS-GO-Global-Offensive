#include <iostream>
#include <locale.h>
#include "figure.h"
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	

	float x1, x2, x3, x4, y1, y2, y3, y4;

	cout << "������� 4 �������� ���������� x � y ���������������� A ����� ������: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure A(x1, x2, x3, x4, y1, y2, y3, y4);
	A.show();

	cout << "������� 4 �������� ���������� x � y ���������������� B ����� ������: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure B(x1, x2, x3, x4, y1, y2, y3, y4);
	B.show();

	cout << "������� 4 �������� ���������� x � y ���������������� C ����� ������: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure C(x1, x2, x3, x4, y1, y2, y3, y4);
	C.show();

	return 0;
		
}

