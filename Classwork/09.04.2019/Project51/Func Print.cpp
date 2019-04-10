#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;

void Print(int *const arrey, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Index " << i << "; Value " << arrey[i] << "; Adress " << arrey + i << endl;
	}
}