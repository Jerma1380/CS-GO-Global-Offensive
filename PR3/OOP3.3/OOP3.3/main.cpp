#include<iostream>
#include<cmath>
#include"rational.h"
#include<locale.h>

using namespace std;

rational operator -(const rational& first, const rational& second) {
	rational result;
	if (second.b == first.b) {
		result.set(first.a - second.a, first.b);
		return result;
	}
	else {
		result.set((first.a * second.b) - (second.a * first.b), (first.b * second.b));
		return result;
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	int n, a, b, i;
	cout << "Введите количество чисел n: " << endl;
	cin >> n;
	rational* x = new rational[n];
    for (i = 0; i < n; i++) {
        cout << "Введите значение числителя и знаменателя дроби номер " << i + 1 << " через пробел: " << endl;
        cin >> a >> b;
        x[i].set(a, b);
        x[i].show();
    }
    if (i > 0) {
        rational result(0, 0);

        result = x[0] + x[1];
        cout << "Сумма первой и второй дробей равна: " << endl;
        result.show();
        cout << endl;

        result = x[0] - x[1];
        cout << "Разность первой и второй дробей равна: " << endl;
        result.show();
        cout << endl;

        cout << "Инкремент первой дроби равен: " << endl;
        x[0]++;
        x[0].show();
        cout << endl;

        cout << "Операция сравнения == первой и второй дробей: " << endl;
        x[0] == x[1] ? cout << "Дроби равны." << endl : cout << "Дроби не равны." << endl;
        cout << endl;

        cout << "Операция сравнения > первой и второй дробей: " << endl;
        x[0] > x[1] ? cout << "Первая дробь больше второй." << endl : cout << "Первая дробь меньше второй." << endl;
        cout << endl;

        cout << "Присваивание первой дроби ко второй: " << endl;
        x[0] = x[1];
        x[0].show();
        cout << endl;
    }
	delete[] x;
}
