#pragma once
#include<iostream>
#include<string>
using namespace std;

class Ocean {
protected:
	string name, location;
	double volume, depth, square;
public:
	Ocean();
	Ocean(string n, string l, double v, double d, double S);
	friend ostream& operator <<(ostream& os, Ocean& obj);
	friend istream& operator >>(istream& os, Ocean& obj);
};
class Sea : public Ocean {
public:
	Sea();
	Sea(string n, string l, double v, double d, double S);
	friend ostream& operator <<(ostream& os, Sea& obj);
	friend istream& operator >>(istream& os, Sea& obj);
};
class Bay : public Sea {
public:
	Bay();
	Bay(string n, string l, double v, double d, double S);
	friend ostream& operator <<(ostream& os, Bay& obj);
	friend istream& operator >>(istream& os, Bay& obj);
};