#include "stdafx.h"
#include "AlphabetSort.h"
#include "Price.h"



void AlphabetSort(Price *P,int size)
{
	string temp;
	int k;
	for (int i = 0; i < size; i++)
	{
		k = i;
		temp = P[i].getShopName();
		for (int j = i+1; j < size; j++)
		{
			string tempJ = P[j].getShopName();
			
		}
		//string temp = P[i+1].getShopName();
		
	}
}