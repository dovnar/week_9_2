#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = { 7, 6, 9, 5, 3 };
	int const arraySize = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;

	for (int j = 0; j < size - 1; j++)
	{
		bool isSorted = true;
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int number = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = number;
				isSorted = false;
			}
		}
		if (isSorted)
		{
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
