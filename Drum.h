#pragma once
#include "MusicalInstrument.h"

#include <iostream>

class Drum : public MusicalInstrument 
{
	string coating, drumsticks;
	int year;
public:
	
	Drum() : MusicalInstrument()
	{
		year = 0;
	}

	Drum(string c, string d, int y)
	{
		this->coating = c;
		this->drumsticks = d;
		this->year = y;
	}
	
	void setDrum()
	{
		MusicalInstrument::setInstrument();

		cout << "Year: " << endl;
		cin >> year;
		cout << "Coating: " << endl;
		cin >> coating;
		cout << "Drumsticks: " << endl;
		cin >> drumsticks;
	
	}

	void showDrum()
	{
		cout << "Name: " << name << endl;
		cout << " Production: " << production << endl;
		cout << " Cost: " << cost << endl;
		cout << " Year: " << year << endl;
		cout << " Coating: " << coating << endl;
		cout << " Drumsticks: " << drumsticks << endl;
	
	}
	
	



};