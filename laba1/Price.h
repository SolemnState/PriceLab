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
	Price(const Price& P);
	~Price();
	Price& operator=(Price& P);
	string getProductName();
	string getShopName(); 
	void ShowProduct();
	void ShowCost();
	void show();
	void ShowProductAndCost();
};
