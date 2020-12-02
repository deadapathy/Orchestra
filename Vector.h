#pragma once
#include "MusicalInstrument.h"
#include "Drum.h"
#include "Dombra.h"
class Vector : public MusicalInstrument
{
	Drum* dru;
	Dombra* dom;


	int cur_size;
	int buff_size;

public:
	Vector();
	Vector(int size);
	void setInstrument();

	void push_back(MusicalInstrument& obj);
	void pop_back();

	int size();

	~Vector();
};