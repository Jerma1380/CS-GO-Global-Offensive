#include <iostream>
#include <time.h>
#include <string>
using namespace std;
#include "locale.h"
template <class S1, class S2> void sort(S1*& m, S2 n) {
	S1 c;
	int i = 0;
	while (i <= (n - 2)) {
		if (m[i] > m[i + 1]) {
			c = m[i];
			m[i] = m[i + 1];
			m[i + 1] = c;
			i = 0;
			continue;
		}
		i++;
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество элементов в списке: ";
	cin >> n;
	int* m = new int[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100;
	}
	cout << "Список до сортировки: ";
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	sort(m, n);
	cout << "Список после сортировки: ";
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
	delete[] m;
	cout << endl << "Введите количество строк: ";
	cin >> n;
	cout << "Введите " << n << " строки" << endl;
	string* s = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, n);
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	delete[] s;
}
