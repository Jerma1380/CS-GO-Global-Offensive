#include"Water.h"
#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    
    Ocean ocean;
    Sea sea;
    Bay bay;
    
    cout << "������� ��������, ��������������, �����, ������� � ������� ������ ����� ������: ";
    cin >> ocean;
    
    cout << endl << "������� ��������, ��������������, �����, ������� � ������� ���� ����� ������: ";
    cin >> sea;
    
    cout << endl << "������� ��������, ��������������, �����, ������� � ������� ������ ����� ������: ";
    cin >> bay;
   
    cout << endl;

    cout << ocean << sea << bay;
}