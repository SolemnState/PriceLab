#include "stdafx.h"
#include "AlphabetSort.h"
#include "Price.h"



void AlphabetSort(Price *P,int size)
{
	string tempI;
	int min_idx;
	for (int i = 0; i < size-1; i++)
	{
		min_idx= i;
		tempI = P[i].getShopName();
		for (int j = i+1; j < size; j++)
		{
			string tempJ = P[j].getShopName();
			if (tempI == tempJ)
				min_idx = i;
			for (int str_size = 0; str_size < (tempI.length() < tempJ.length() ? tempI.length() : tempJ.length()); str_size++)
			{
				if ((int)tempI[str_size] > (int)tempJ[str_size])
				{
					min_idx = j;
					tempI = tempJ;
					break;
				}
			}
			
		}

		if (min_idx!= i)
		{
			Price temp_P = P[i];
			P[i] = P[min_idx];
			P[min_idx] = temp_P;
			min_idx=i;
		}
		
	}
}