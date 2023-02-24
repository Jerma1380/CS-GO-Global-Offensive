#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

float P = 3.14;

Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
float Circle::square() {
	float s = P * radius * radius;
	return s;
}
bool Circle::triangle_around(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r2 = (a * b * c) / 4 * s;
	return radius && r2;
}
bool Circle::triangle_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r2 = 2 * s / (a + b + c);
	return radius && r2;
}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	float d = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
	return radius + r <= d; 
}

	