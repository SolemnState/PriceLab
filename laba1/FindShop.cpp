#include "stdafx.h"
#include "FindShop.h"

void FindShop(Price *P,int size)
{
	string Shop;
	std::cout << "Enter the name of the shop:";
	std::cin >> Shop;
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		string temp = P[i].getShopName();
		if ((Shop == temp) == true)
		{
			flag = true;
			P[i].show();
		}

	}
	if (flag == false)
		std::cout << "No Shops with this name!" << std::endl;
}

