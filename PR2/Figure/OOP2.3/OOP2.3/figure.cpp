#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;

Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
}
bool Figure::is_prug() {
	float ax = x2 - x1;
	float bx = x3 - x2;
	float ay = y2 - y1;
	float by = y3 - y2;
	float cx = x4 - x3;
	float dx = x4 - x1;
	float cy = y4 - y3;
	float dy = y4 - y1;
	float A = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	float B = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	float C = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	float D = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	float cosA = (ay * dy + ax * dx) / (sqrt(ax * ax + ay * ay) * sqrt(dx * dx + dy * dy)) + 0.0;
	float cosB = (ay * by + ax * bx) / (sqrt(ax * ax + ay * ay) * sqrt(bx * bx + by * by)) + 0.0;
	float cosC = (cy * by + cx * bx) / (sqrt(cx * cx + cy * cy) * sqrt(bx * bx + by * by)) + 0.0;
	float cosD = (cy * dy + cx * dx) / (sqrt(cx * cx + cy * cy) * sqrt(dx * dx + dy * dy)) + 0.0;
	if (cosA == 0 && cosB == 0 && cosC == 0 && cosD == 0) {
		if (A == C && B == D && A != B && C != D) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
bool Figure::is_square() {
	float A = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	float B = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	float C = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	float D = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	float d1 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	float d2 = sqrt(((x4 - x2) * (x4 - x2)) + ((y4 - y2) * (y4 - y2)));
	return (A == B && B == C && C == D && A == D && d1 == d2);
}
bool Figure::is_romb() {
	float A = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	float B = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	float C = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	float D = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	float d1 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	float d2 = sqrt(((x4 - x2) * (x4 - x2)) + ((y4 - y2) * (y4 - y2)));
	return (A == B && B == C && C == D && A == D && d1 != d2);
}
bool Figure::is_in_circle() {
	float ax = x2 - x1;
	float bx = x3 - x2;
	float ay = y2 - y1;
	float by = y3 - y2;
	float cx = x4 - x3;
	float dx = x4 - x1;
	float cy = y4 - y3;
	float dy = y4 - y1;
	float cosA = (ay * dy + ax * dx) / (sqrt(ax * ax + ay * ay) * sqrt(dx * dx + dy * dy));
	float cosB = (ay * by + ax * bx) / (sqrt(ax * ax + ay * ay) * sqrt(bx * bx + by * by));
	float cosC = (cy * by + cx * bx) / (sqrt(cx * cx + cy * cy) * sqrt(bx * bx + by * by));
	float cosD = (cy * dy + cx * dx) / (sqrt(cx * cx + cy * cy) * sqrt(dx * dx + dy * dy));
	return (((cosA + cosC) == 0) && ((cosB + cosD) == 0));
}
bool Figure::is_out_circle() {
	float ax = x2 - x1;
	float bx = x3 - x2;
	float ay = y2 - y1;
	float by = y3 - y2;
	float cx = x4 - x3;
	float dx = x4 - x1;
	float cy = y4 - y3;
	float dy = y4 - y1;
	float A = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	float B = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	float C = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	float D = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	return A + C == B + D;
}
void Figure::show() {
	float ax = x2 - x1;
	float bx = x3 - x2;
	float ay = y2 - y1;
	float by = y3 - y2;
	float cx = x4 - x3;
	float dx = x4 - x1;
	float cy = y4 - y3;
	float dy = y4 - y1;
	float A = sqrt((ax*ax) + (ay*ay));
	float B = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float C = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float D = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	float cosA = ((ay * dy + ax * dx) / (sqrt(ax * ax + ay * ay) * sqrt(dx * dx + dy * dy))) + 0.0;
	float cosB = ((ay * by + ax * bx) / (sqrt(ax * ax + ay * ay) * sqrt(bx * bx + by * by))) + 0.0;
	float cosC = ((cy * by + cx * bx) / (sqrt(cx * cx + cy * cy) * sqrt(bx * bx + by * by))) + 0.0;
	float cosD = ((cy * dy + cx * dx) / (sqrt(cx * cx + cy * cy) * sqrt(dx * dx + dy * dy))) + 0.0;
	float d1 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	float d2 = sqrt(((x4 - x2) * (x4 - x2)) + ((y4 - y2) * (y4 - y2)));
	float S = abs((x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x4) * (y3 + y4) + (x4 - x1) * (y4 + y1)) / 2;
	float P = A + B + C + D;
	cout << "Сторона AB равна: " << A << endl;
	cout << "Сторона BC равна: " << B << endl;
	cout << "Сторона CD равна: " << C << endl;
	cout << "Сторона AD равна: " << D << endl;
	cout << "Площадь четырехугольника равна: " << S << endl;
	cout << "Периметр четырехугольника равен: " << P << endl;
	if (Figure::is_prug())
		cout << "Четырехугольник является прямоугольником." << endl;
	if (Figure::is_square())
		cout << "Четырехугольник является квадратом." << endl;
	if (Figure::is_romb())
		cout << "Четырехугольник является ромбом." << endl;
	if (Figure::is_in_circle())
		cout << "Четырехугольник можно вписать в окружность." << endl;
	if (Figure::is_out_circle())
		cout << "Четырехугольник можно описать около окружности." << endl;
}