#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int arr[n];
	cout << "������� ������ ������� �������: "; cin >> arr[0];
	cout << "������� ������ ������� �������: "; cin >> arr[1];
	cout << "������� ������ ������� �������: "; cin >> arr[2];
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

	cout << "����� ��������� �������: " << arr[0] + arr[1] + arr[2] << endl;
	cout << "������� �������������� �����: " << (arr[0] + arr[1] + arr[2]) / n << endl;

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

	cout << "����������� ������� �������: " << min << endl;
	cout << "������������ ������� �������: " << max << endl;

	
}