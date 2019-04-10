#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;

void PushInBegin(int *&arrey, int size, int value)
{
	int *newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i + 1] = arrey[i];
	}
	newArr[0] = value;

	delete[] arrey;
	arrey = newArr;
}