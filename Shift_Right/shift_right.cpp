#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	// Вывод исходного массива:

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// Циклический сдвиг массива вправо:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer_right = arr[n - 1]; 

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1]; 
		}
		arr[0] = buffer_right; 

		// Вывод сдвинутого массива
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}