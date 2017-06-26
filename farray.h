// Name: Ali Bayati
// Number Array Class 
#pragma once
#include<iostream>


class farray
{
public :
	//constructor 
	farray(int n)
	{
		numlist = n;
		list = new float[numlist];
		for (int i = 0; i < numlist; i++)
		{
			list[i] = i+1;
		}
	}
	
	//destructor
	~farray()
	{
		delete [] list;
	}
	

	void strnum(int , float);
	float retrvnum(int);
	float hestnum();
	float lowstnum();
	float avg();
	float printlist(int);

	private:
		float* list;
	    int numlist;
		
};

void farray::strnum(int p,float f)
{
	list[p-1] = f;
}
float farray::retrvnum(int t)
{
	return list[t-1];
}
float farray::hestnum()
{
	int hindex=0, i;
	for (i = 0; i < numlist; i++)
	{
		if (list[i] > list[hindex])
			hindex = i;
		
	}
	return list[hindex];
}
float farray::lowstnum()
{
	int i, lowindx=0;
	for (i = 0; i < numlist; i++)
	{
		if (list[i] < list[lowindx])
			lowindx = i;
		
		
	}
	return list[lowindx];
}

float farray::avg()
{
	int i;
	float avarage,total;
	total = 0;
	for (i = 0; i < numlist; i++)
		total+=list[i];
	avarage = total / numlist;
	return avarage;
}

		