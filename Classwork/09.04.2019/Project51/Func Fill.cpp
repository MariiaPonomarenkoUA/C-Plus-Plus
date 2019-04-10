#include "Header functions for arrey.h"
#include <iostream>
#include <ctime>
using namespace std;

void Fill(int *const arrey, const int size)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		arrey[i] = rand() % 10;
	}
}