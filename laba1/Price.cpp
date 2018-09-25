#include "stdafx.h"
#include "Price.h"

using namespace std;

Price::Price()
{
	cout << "ctor" << endl;
	int i = 0;
	cout << "Enter name of the shop: ";
	cin >> ShopName;
	/*ShopName = (char*)malloc(sizeof(char));		
	while ((*ShopName = getchar()) != '\n')
		ShopName = (char*)realloc(ShopName, 1 + i++ * sizeof(char));
	cout << "Enter name of the product: ";
	i = 0;
	ProductName = (char*)malloc(sizeof(char));
	while ((*ProductName = getchar()) != '\n')
		ShopName = (char*)realloc(ProductName, 1 + i++ * sizeof(char));*/
	cout << "Enter name of the product: ";
	cin >> ProductName;
	cout << "Enter the price:";
	cin >> Cost;
}
Price :: ~Price()
{
	cout << "dtor" << endl;
	//free(ShopName);
	//free(ProductName);
}

void Price::show()
{
	cout << "Name of the shop:"<< ShopName << endl;
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