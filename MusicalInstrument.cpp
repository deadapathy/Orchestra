#include "MusicalInstrument.h"
#include <iostream>

MusicalInstrument::MusicalInstrument()
{
	this->name = name;
	this->production = production;
	this->cost = cost;
}


void MusicalInstrument::setInstrument()
{
	cout << "Enter name of instrument: " << endl;
	cin >> name;
	cout << "Enter production of instrument: " << endl;
	cin >> production;
	cout << "Enter cost of instrument: " << endl;
	cin >> cost;
}

/*
void MusicalInstrument::showInstrument()
{
	cout << "Name: " << name;
	cout << " Production: " << production;
	cout << " Cost: " << cost;

}
*/

