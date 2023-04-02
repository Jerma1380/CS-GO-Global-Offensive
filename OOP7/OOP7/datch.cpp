#include "datch.h"
#include <iostream>
#include<string>
#include <locale.h>
using namespace std;

void Datchik::set_X(string x1) {
	x = x1;
}

void Datchik::indicator() {
	if (x == "Yes") {
		cout << "1" << endl;
	}
	if (x == "No") {
		cout << "0" << endl;
	}
	else {
		cout << "-" << endl;
	}
}