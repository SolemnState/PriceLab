#pragma once
#include "stdafx.h"


using namespace std;

class Price
{
private:
	//char *ProductName = nullptr;
	//char *ShopName = nullptr;
	string ProductName;
	string ShopName;
	int Cost;
public:
	Price();
	~Price();
	void show();
	string getProductName();
	string getShopName(); 
	void ShowProduct();
	void ShowCost();
	int getCost();

};
