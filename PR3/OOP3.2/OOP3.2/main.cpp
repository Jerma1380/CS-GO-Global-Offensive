#include<iostream>
#include<cmath>
#include"rational.h"
#include<locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int n, a, b;
	cout << "������� ���������� ����� n: " << endl;
	cin >> n;
	rational* x = new rational[n];
	for (int i = 0; i < n; i++) {
		cout << "������� �������� ��������� � ����������� ����� ����� " << i + 1 << " ����� ������: " << endl;
		cin >> a >> b;
		x[i].set(a, b);
		x[i].show();
	}
	delete[] x;
}


