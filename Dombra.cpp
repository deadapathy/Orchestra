#include "Dombra.h"
#include <iostream>

Dombra::Dombra()
{
	this->cost = 0;
	this->material = " ";
	this->name = " ";
	this->production = " ";
	this->strings = " ";
}

Dombra::Dombra(int c, string m, string n, string p, string s)
{
	this->cost = c;
	this->material = m;
	this->name = n;
	this->production = p;
	this->strings = s;
}

void Dombra::setDombra()
{
	MusicalInstrument::setInstrument();
	cout << "Enter type of strings: ";
	cin >> strings;
	cout << "Enter type of material: ";
	cin >> material;
}

void Dombra::showDombra()
{
	cout << "Name: " << name << endl;
	cout << " Production: " << production << endl;
	cout << " Cost: " << cost << endl;
	cout << " Strings: " << strings << endl;
	cout << " Material: " << material << endl;
	
	
}

