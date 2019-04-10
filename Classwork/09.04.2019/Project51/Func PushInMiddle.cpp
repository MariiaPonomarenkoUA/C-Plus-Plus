#include "Header functions for arrey.h"

void PushInMiddle(int *&arrey, int size, int value, int after)
{
	int *newArr = new int[size + 1];

	//for (int i 
	//for (int i = 0; after >= 0 && after < size; i++)

	for (int i = 0; i < after + 1; i++)
	{
		newArr[i] = arrey[i];
	}
	for (int i = after + 1; i >= after + 1 && i < size; i++)
	{
		newArr[i + 1] = arrey[i];
	}
	newArr[after + 1] = value;

	delete[] arrey;
	arrey = newArr;
}