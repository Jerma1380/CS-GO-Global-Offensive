#include <iostream>
#include <locale.h>
#include "figure.h"
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	

	float x1, x2, x3, x4, y1, y2, y3, y4;

	cout << "¬ведите 4 значени€ переменных x и y четырехугольника A через пробел: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure A(x1, x2, x3, x4, y1, y2, y3, y4);
	A.show();

	cout << "¬ведите 4 значени€ переменных x и y четырехугольника B через пробел: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure B(x1, x2, x3, x4, y1, y2, y3, y4);
	B.show();

	cout << "¬ведите 4 значени€ переменных x и y четырехугольника C через пробел: " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	Figure C(x1, x2, x3, x4, y1, y2, y3, y4);
	C.show();

	return 0;
		
}

