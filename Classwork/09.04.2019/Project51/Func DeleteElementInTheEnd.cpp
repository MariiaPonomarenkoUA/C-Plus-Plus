#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;


void DeleteElementInTheEnd(int *&arrey, int size)
{
	int *newArr = new int[size - 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arrey[i];
	}

	delete[] arrey;
	arrey = newArr;
}