#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;


void DeleteElementOfIndex(int *&arrey, int size, int index)
{
	int *newArr = new int[size + 1];

	for (int i = 0; i <= index; i++)
	{
		newArr[i] = arrey[i];
	}
	for (int i = index + 1; i >= index + 1 && i < size; i++)
	{
		newArr[i - 1] = arrey[i];
	}

	delete[] arrey;
	arrey = newArr;
}