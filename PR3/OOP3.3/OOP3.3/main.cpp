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
	cout << "������� ���������� ����� n: " << endl;
	cin >> n;
	rational* x = new rational[n];
    for (i = 0; i < n; i++) {
        cout << "������� �������� ��������� � ����������� ����� ����� " << i + 1 << " ����� ������: " << endl;
        cin >> a >> b;
        x[i].set(a, b);
        x[i].show();
    }
    if (i > 0) {
        rational result(0, 0);

        result = x[0] + x[1];
        cout << "����� ������ � ������ ������ �����: " << endl;
        result.show();
        cout << endl;

        result = x[0] - x[1];
        cout << "�������� ������ � ������ ������ �����: " << endl;
        result.show();
        cout << endl;

        cout << "��������� ������ ����� �����: " << endl;
        x[0]++;
        x[0].show();
        cout << endl;

        cout << "�������� ��������� == ������ � ������ ������: " << endl;
        x[0] == x[1] ? cout << "����� �����." << endl : cout << "����� �� �����." << endl;
        cout << endl;

        cout << "�������� ��������� > ������ � ������ ������: " << endl;
        x[0] > x[1] ? cout << "������ ����� ������ ������." << endl : cout << "������ ����� ������ ������." << endl;
        cout << endl;

        cout << "������������ ������ ����� �� ������: " << endl;
        x[0] = x[1];
        x[0].show();
        cout << endl;
    }
	delete[] x;
}
