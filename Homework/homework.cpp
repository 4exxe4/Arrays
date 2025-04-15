#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int arr[n];
	cout << "Введите первый элемент массива: "; cin >> arr[0];
	cout << "Введите второй элемент массива: "; cin >> arr[1];
	cout << "Введите третий элемент массива: "; cin >> arr[2];
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	for (int i = 2; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	
	cout << endl;

	cout << "Сумма элементов массива: " << arr[0] + arr[1] + arr[2] << endl;
	cout << "Среднее арифметическое число: " << (arr[0] + arr[1] + arr[2]) / n << endl;

	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	int max = arr[0];
	
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива: " << max << endl;

	
}