#include "stdafx.h"
#include "Price.h"

using namespace std;

Price::Price()
{
	cout << "Class Price Ctor" << endl;
	cout << "Enter name of the shop: ";
	cin >> ShopName;
	cout << "Enter name of the product: ";
	cin >> ProductName;
	cout << "Enter the price:";
	cin >> Cost;
}

Price::Price(const Price& P)
{
	cout << "copy ctor" << endl;

	this->ShopName = P.ShopName;
	this->ProductName = P.ProductName;
	this->Cost = P.Cost;
}

Price :: ~Price()
{
	cout << "Price dtor" << endl;
}

void Price::show()
{
	cout << "Name of the shop:"<< ShopName << endl;
	cout << "Name of the product:" << ProductName << endl;
	cout << "Price:" << Cost << endl;
}

void Price::ShowProductAndCost()
{
	cout << "Name of the product:" << ProductName << endl;
	cout << "Price:" << Cost << endl;
}

string Price::getShopName()
{
	return ShopName;
}
string Price::getProductName()
{
	return ProductName;
}
void Price::ShowProduct()
{
	cout << "Name of the product:" << ProductName << endl;
}
void Price::ShowCost()
{
	cout << "Price:" << Cost << endl;
}

Price& Price::operator=(Price& P)
{
	cout << "Operator= Price" << endl;
	this->ProductName = P.ProductName;
	this->ShopName = P.ShopName;
	this->Cost = P.Cost;
	return *this;
}