#pragma once
#include "stdafx.h"


using namespace std;

class Price
{
private:
	string ProductName;
	string ShopName;
	int Cost;
public:
	Price();
	Price(const Price*);
	~Price();
	void show();
	void ShowProductAndCost();
	string getProductName();
	string getShopName(); 
	void ShowProduct();
	void ShowCost();
	int getCost();
	Price* operator=(Price*);
	Price* operator++();
	void SetNewObject();


};
