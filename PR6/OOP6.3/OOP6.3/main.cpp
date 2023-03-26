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
    
    cout << "Введите название, местоположение, объем, глубину и площадь океана через пробел: ";
    cin >> ocean;
    
    cout << endl << "Введите название, местоположение, объем, глубину и площадь моря через пробел: ";
    cin >> sea;
    
    cout << endl << "Введите название, местоположение, объем, глубину и площадь залива через пробел: ";
    cin >> bay;
   
    cout << endl;

    cout << ocean << sea << bay;
}