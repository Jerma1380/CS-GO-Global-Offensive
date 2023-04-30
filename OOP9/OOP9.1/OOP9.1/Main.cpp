#include <iostream>
using namespace std;
#include "Swap.h"
#include "locale.h"

int main() {
	setlocale(LC_ALL, "Russian");
	
	int x = 1;
	int y = 2;
	cout << "����� ������� (�����)\n";
	OutXY(x, y);
	Swap(x, y);
	cout << "����� ������\n";
	OutXY(x, y);
	
	float x1 = 1.5;
	float y1 = 5.9;
	cout << "����� ������� (float)\n";
	OutXY(x1, y1);
	Swap(x1, y1);
	cout << "����� ������\n";
	OutXY(x1, y1);
	
	Class1 s1(1, 1.5), s2(2, 9.9);
	cout << "����� ������� (������)\n";
	s1.Out();
	s2.Out();
	Swap(s1, s2);
	cout << "����� ������\n";
	s1.Out();
	s2.Out();
	
	return 0;
}