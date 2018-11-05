#include "stdafx.h"
#include "Container.h"

using namespace std;
    Container::Container()
    {
        cout<<"Container Ctor"<<endl;
        size=3;
        Data=new Price*[size];
        for (int i=0;i<size;i++)
            Data[i]=new Price;
    }
	Container:: ~Container(){
        cout<<"dtor Container"<<endl;
			delete[] Data;
    }

	Container::Container (Container C, int value)
    {
        cout<<"copy Ctor Container"<<endl;
        size=value;
        Data=new Price*[size];
        for (int i=0;i<(C.size < this->size ? C.size : this->size);i++)
                this->Data[i]=C.Data[i];
    }

	Container::Container(int value)
	{
		cout << "ctor with param value" << endl;
		size = value;
		Data = new Price*[size];
	}

     void Container::showContainer()
    {
        for (int i=0;i<this->size;i++)
            Data[i]->show();
    }

	Container& Container:: operator +=(Price* P)
	{
		cout << "Operator +=" << endl;
		Container newC(*this, (this->getSize() + 1));
		newC.Data[(newC.size) - 1] = P;
		this->size++;
		this->Data = new Price*[this->size];
		for (int i = 0; i<this->size; i++)
			this->Data[i] = newC.Data[i];
		return *this;
	}

	Container& Container:: operator --()
	{
		cout << "Operator --" << endl;
		this->size--;
		Container newC(*this, (this->size));
		this->Data = new Price*[this->size];
		for (int i = 0; i<this->size; i++)
			this->Data[i] = newC.Data[i];
		return *this;

	}

	void Container::AlphaberSort()
	{
		string tempI;
		int min_idx;
		for (int i = 0; i < this->size - 1; i++)
		{
			min_idx = i;
			tempI = this->Data[i]->getShopName();
			for (int j = i + 1; j < size; j++)
			{
				string tempJ = this->Data[j]->getShopName();
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



				if (min_idx != i)
				{
					Price* temp_P = new Price(*Data[i]);
					this->Data[i] = this->Data[min_idx];
					this->Data[min_idx] = temp_P;
					min_idx = i;
				}
			}
		}
	}

    int Container:: getSize()
    {
        return this->size;
    }

	Container* Container::FindShop(string name)
	{
		int* idxArray=new int[this->size];
		int j = 0;
		for (int i = 0; i < size; i++)
		{
			string temp = this->Data[i]->getShopName();
			if ((name == temp) == true)
			{
				idxArray[j] = i;
				j++;
			}
			
		}
		Container* subC=new Container(j);
		for (int i = 0; i < j; i++)
			subC->Data[i] = this->Data[idxArray[i]];
		delete[] idxArray;
		return subC;
	}

	bool Container::isEmpty()
	{
		if (this->size == 0)
			return true;
		else return false;
	}