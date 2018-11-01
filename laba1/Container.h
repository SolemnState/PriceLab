#pragma once
#include "Price.h"
#include "stdafx.h"

class Container
{
private:
	Price** Data;
	int size;
public:
	Container();
	
	~Container();
	Container(Container C, int value);
	Container(int value);
	void showContainer();
	Container& operator +=(Price* P);
	Container& operator ++();
	Container& operator --();
	void AlphaberSort();
	Container* FindShop(string name);
	int getSize();
	bool isEmpty();

};