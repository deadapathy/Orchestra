#pragma once
#include "MusicalInstrument.h"
#include <string>

class Dombra : public MusicalInstrument
{
	string strings, material;

public:
	Dombra();
	Dombra(int c, string m, string n, string p, string s);


	void setDombra();
	void showDombra();


private:

};

