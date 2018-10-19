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
	void showContainer();
	Container& operator ++();
	Container& operator --();
	string getProductName();
	string getShopName();
	void AlphaberSort();
	bool FindShop();
	int getSize();

};