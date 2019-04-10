#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;

void Push(int *&arrey, int size, int value)
{
	int *newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arrey[i];
	}
	newArr[size] = value;

	delete[] arrey;
	arrey = newArr;
}