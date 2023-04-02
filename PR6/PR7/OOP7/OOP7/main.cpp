#include "datch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main() {
	string i;

	setlocale(LC_ALL, "Russian");
	cout << "Движение обнаружино (введите Yes или No)? " << endl;
	cin >> i;

	Datchik A;

	A.set_X(i);
	A.indicator();
}