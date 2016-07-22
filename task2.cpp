#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size = 8;
	int arr[size]{ 7, 3, 8, 6, 4, 2, 1, 5};
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		int id = 0;
		
		for (int j = 0, max = 0; j < size - i; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				id = j;
			}
		}

		for (int j = 0; j < id; j++, id--)
		{
			int number = arr[id];
			arr[id] = arr[j];
			arr[j] = number;
		}

		for (int j = 0, l = size - 1 - i; j < l; j++, l--)
		{
			int number = arr[l];
			arr[l] = arr[j];
			arr[j] = number;
		}
	}
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";
	}
}