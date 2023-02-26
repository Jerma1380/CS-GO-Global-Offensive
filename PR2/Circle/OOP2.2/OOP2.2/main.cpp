#include <iostream>
#include <locale.h>
#include "circle.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	Circle A(0, 0, 0);
	Circle B(0, 0, 0);
	Circle C(0, 0, 0);

	float x, y, r;

	cout << "Введите x, y и r для окружности A через пробел: " << endl;
	cin >> x >> y >> r;
	A.set_circle(r, x, y);
	cout << "Площадь окружности A равна: " << A.square() << endl;


	cout << "Введите x, y и r для окружности B через пробел: " << endl;
	cin >> x >> y >> r;
	B.set_circle(r, x, y);
	cout << "Площадь окружности B равна: " << B.square() << endl;

	cout << "Введите x, y и r для окружности C через пробел: " << endl;
	cin >> x >> y >> r;
	C.set_circle(r, x, y);
	cout << "Площадь окружности C равна: " << C.square() << endl;

	float rad, x_cntr, y_cntr;

	cout << "Введите значения r, x и y для окружности D через пробел: " << endl;
	cin >> rad >> x_cntr >> y_cntr;

	if (A.check_circle(rad, x_cntr, y_cntr))
		cout << "Окружности A и D пересекаются." << endl;
	else
		cout << "Окружности A и D не пересекаются." << endl;

	if (B.check_circle(rad, x_cntr, y_cntr))
		cout << "Окружности B и D пересекаются." << endl;
	else
		cout << "Окружности B и D не пересекаются." << endl;

	if (C.check_circle(rad, x_cntr, y_cntr))
		cout << "Окружности C и D пересекаются." << endl;
	else
		cout << "Окружности C и D не пересекаются." << endl;
	
	float a, b, c;

	cout << "Введите значение сторон a, b и c треугольника через пробел: " << endl;
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c))
		cout << "Данный треугольник можно вписать в окружность A." << endl;
	else
		cout << "Данный треугольник нельзя вписать в окружность A." << endl;

	if (B.triangle_around(a, b, c))
		cout << "Данный треугольник можно вписать в окружность B." << endl;
	else
		cout << "Данный треугольник нельзя вписать в окружность B." << endl;

	if (C.triangle_around(a, b, c))
		cout << "Данный треугольник можно вписать в окружность C." << endl;
	else
		cout << "Данный треугольник нельзя вписать в окружность C." << endl;

	if (A.triangle_in(a, b, c))
		cout << "Данный треугольник можно описать около окружности A." << endl;
	else
		cout << "Данный треугольник нельзя описать около окружности A." << endl;

	if (B.triangle_in(a, b, c))
		cout << "Данный треугольник можно описать около окружности B." << endl;
	else
		cout << "Данный треугольник нельзя описать около окружности B." << endl;

	if (C.triangle_in(a, b, c))
		cout << "Данный треугольник можно описать около окружности C." << endl;
	else
		cout << "Данный треугольник нельзя описать около окружности C." << endl;

	return 0;
}


