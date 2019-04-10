#include "Header functions for arrey.h"
# include <iostream>;
using namespace std;

int ChooseTypeOfOperation(int size)
{
	int choise = 0;
	if (size > 0)
	{
		cout << "\nPrint arrey - 1;\nAdd an array element in the end - 2\nAdd an array element in the begin - 3\nAdd an array element after some element - 4\nDelete first element - 5";
		cout << "\nDelete last element - 6\nDelete element of the index - 7\nAdd massive to begin - 8\nAdd massive to the end - 9\nAdd massive after index - 10.\nQuit - 0" << endl << endl;
		cin >> choise;
		if (choise != 1 && choise != 2 && choise != 3 && choise != 4 && choise != 5 && choise != 6 && choise != 7 && choise != 8 && choise != 9 && choise != 10 && choise != 0)
		{
			cout << "Incorrect choise! Try again." << endl << endl;
			return ChooseTypeOfOperation(size);
		}
	}
	else
	{
		cout << "\nPrint arrey - 1;\nAdd an array element in the end - 2\nAdd an array element in the begin - 3\nAdd an array element after some element - 4\nAdd massive to begin - 8\nAdd massive to the end - 9\nAdd massive after index - 10.\nQuit - 0" << endl << endl;
		cin >> choise;
		if (choise != 1 && choise != 2 && choise != 3 && choise != 4 && choise != 0 && choise != 8 && choise != 9 && choise != 10)
		{
			cout << "Incorrect choise! Try again." << endl << endl;
			return ChooseTypeOfOperation(size);
		}
	}

	return choise;
}