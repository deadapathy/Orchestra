#pragma once
#include <string>
using namespace std;

class MusicalInstrument
{
protected:
	string name, production;
	int cost;
public:
	MusicalInstrument();
	
	void setInstrument();

	void showInstrument();

private:

};

