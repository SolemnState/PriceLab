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
	Container& operator +=(Price* P);
	Container& operator --();
	Container* FindShop(string name);
	void AlphaberSort();
	void showContainer();
	int getSize();
	bool isEmpty();

};