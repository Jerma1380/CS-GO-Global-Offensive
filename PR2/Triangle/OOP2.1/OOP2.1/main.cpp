#include <iostream>
#include"Triangle.h"
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Введите a, b и c для треугольника номер: " << i + 1 << " через пробел: " << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst_tr())) {
			mas[i].show();
			cout << "Треугольник с такими сторонами не может существовать, попробуйте еще раз" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "Периметр треугольника равен: " << mas[i].perimetr() << endl;
		cout << "Площадь треугольника равна: " << mas[i].square() << endl;
	}
	return 0;
}