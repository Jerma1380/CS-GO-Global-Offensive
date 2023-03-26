#include"Water.h"
#include<iostream>
#include<string>

using namespace std;

Ocean::Ocean() {
	name = " ";
	location = " ";
	depth = square = volume = 0;
}
Ocean::Ocean(string n, string l, double v, double d, double S) {
	name = n;
	location = l;
	volume = v;
	depth = d;
	square = S;
}

ostream& operator << (ostream& os, Ocean& obj) {
	os << "�������� ������: " << obj.name << endl << "�������������� ������: " << obj.location << endl << "����� ������: " << obj.volume << endl << "������� ������: " << obj.depth << endl << "������� ������: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Ocean& obj) {
	is >> obj.name >> obj.location >> obj.volume >> obj.depth >> obj.square;
	return is;
}

Sea::Sea() {
	name = " ";
	location = " ";
	depth = square = volume = 0;
}

Sea::Sea(string n, string l, double v, double d, double S) {
	name = n;
	location = l;
	volume = v;
	depth = d;
	square = S;
}

ostream& operator <<(ostream& os, Sea& obj) {
	os << "�������� ����: " << obj.name << endl << "�������������� ����: " << obj.location << endl << "����� ����: " << obj.volume << endl << "������� ����: " << obj.depth << endl << "������� ����: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Sea& obj) {
	is >> obj.name >> obj.location >> obj.volume >> obj.depth >> obj.square;
	return is;
}

Bay::Bay() {
	name = " ";
	location = " ";
	depth = square = volume = 0;
}

Bay::Bay(string n, string l, double v, double d, double S) {
	name = n;
	location = l;
	volume = v;
	depth = d;
	square = S;
}

ostream& operator <<(ostream& os, Bay& obj) {
	os << "�������� ������: " << obj.name << endl << "�������������� ������: " << obj.location << endl << "����� ������: " << obj.volume << endl << "������� ������: " << obj.depth << endl << "������� ������: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Bay& obj) {
	is >> obj.name >> obj.location >> obj.volume >> obj.depth >> obj.square;
	return is;
}