#include "Vector.h"
#include "MusicalInstrument.h"
#include "Drum.h"
#include "Dombra.h"
#include <iostream>
Vector::Vector()
{
	dom = nullptr;
	dru = nullptr;
	buff_size = 0;
	cur_size = 0;
}

Vector::Vector(int size)
{
	buff_size = size;
	cur_size = 0;
	dru = new Drum[buff_size];
	dom = new Dombra[buff_size];
}

void Vector::setInstrument()
{
	int choise;
	while (true)
	{
		cout << "\nMusical Instrument:" << endl;
		cout << "Enter 1 to create drum" << endl;
		cout << "Enter 2 to create dombra" << endl;
		cout << "Enter 0 to exit" << endl;
		cin >> choise;

		if (!choise)
		{
			break;
		}
		switch (choise)
		{
		case 1: 
		{
			Drum drum;
			drum.setDrum();
			drum.showDrum();
		}
		break;

		case 2:
		{
			Dombra dombra;
			dombra.setDombra();
			dombra.showDombra();
		}
		break;
		}
	}
}



void Vector::push_back(MusicalInstrument& obj)
{
	if (buff_size == 0 && cur_size == 0) 
	{
		buff_size = 4;
		dru = new Drum[buff_size];
		dom = new Dombra[buff_size];
	}
	else if (cur_size <= buff_size) 
	{
		buff_size *= 2;
		Drum* tmp;
		tmp = new Drum[buff_size];

		for (int i = 0; i < cur_size; i++) 
		{
			tmp[i] = dru[i];

		}
		Dombra* dmb;
		dmb = new Dombra[buff_size];

		for(int i = 0; i < cur_size; i++)
		{
			dmb[i] = dmb[i];
		}
		delete[] dom;
		dom = dmb;
		
		delete[] dru;
		dru = tmp;
	}
}

void Vector::pop_back()
{
	cur_size--;
}

int Vector::size()
{
	return cur_size;
}

Vector::~Vector()
{
	if (dru != nullptr)
		delete[] dru;
	if (dom != nullptr)
		delete[] dom;
}



