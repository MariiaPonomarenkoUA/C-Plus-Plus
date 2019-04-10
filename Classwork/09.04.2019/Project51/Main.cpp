# include <iostream>;
# include <ctime>;
#include "Header functions for arrey.h";
using namespace std;

int main()
{

	int size = 0;
	cout << "Enter a size of arrey: ";
	cin >> size;
	int *arrey = new int[size];
	Fill(arrey, size);
	for (int i = 1; i != 0; i++)
	{
		int choise = 1;
		choise = ChooseTypeOfOperation(size);
		cout << endl;
		if (choise == 1)
		{
			Print(arrey, size);
		}
		else if (choise == 2)
		{
			int value = 0;
			cout << "Enter value of last element" << endl;
			cin >> value;
			Push(*&arrey, size, value);
			size++;
		}
		else if (choise == 3)
		{
			int value = 0;
			cout << "Enter value of last element" << endl;
			cin >> value;
			PushInBegin(*&arrey, size, value);
			size++;
		}
		else if (choise == 4)
		{
			int after = 0;
			int value = 0;
			cout << "Enter value of element, what you want add" << endl;
			cin >> value;
			cout << "Enter after what element (index) you want add a new element: ";
			cin >> after;
			for (int i = 0; i <= after; i++)
				PushInMiddle(*&arrey, size, value, after);
			size++;
		}
		else if (choise == 5)
		{
			DeleteElementInTheBegin(*&arrey, size);
			size--;
		}
		else if (choise == 6)
		{
			DeleteElementInTheEnd(*&arrey, size);
			size--;
		}
		else if (choise == 7)
		{
			int index = 0;
			cout << "Enter index of element, what you want delete" << endl;
			cin >> index;
			DeleteElementOfIndex(*&arrey, size, index);
			size--;
		}
		else if (choise == 8)
		{
			int quantity;
			int value;
			cout << "How much element do you want to add?" << endl;
			cin >> quantity;
			cout << "\n";
			for (int i = 0; i < quantity; i++)
			{
				cout << "Enter value of <<" << i << ">> element" << endl;
				cin >> value;
				PushInMiddle(*&arrey, size, value, (i - 1));
				size++;
			}
		}
		else if (choise == 9)
		{
			int quantity;
			int value;
			cout << "How much element do you want to add?" << endl;
			cin >> quantity;
			cout << "\n";
			for (int i = 0; i < quantity; i++)
			{
				cout << "Enter value of <<" << i << ">> element" << endl;
				cin >> value;
				Push(*&arrey, size, value);
				size++;
			}
		}
		else if (choise == 10)
		{
			int quantity;
			int value;
			int after;
			cout << "How much element do you want to add?" << endl;
			cin >> quantity;
			cout << "\n";
			cout << "Enter after what element (index) you want add a new element: ";
			cin >> after;
			for (int i = 0; i < quantity; i++)
			{
				cout << "Enter value of new element" << endl;
				cin >> value;
				PushInMiddle(*&arrey, size, value, after + i);
				size++;
			}
		}

		else if (choise == 0)
		{
			cout << "Good bye!" << endl;
			delete[] arrey;
			i = -1;
		}
	}

	system("pause");
	return 0;
}
