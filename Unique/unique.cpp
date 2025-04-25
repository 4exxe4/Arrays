#include <iostream>
using namespace std;

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % 10;
			unique = true; //предположим, что сгенерировалось уникальное случайное число.
			//Но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; //ключевое слово "break" прерывает текущую итерацию и все последующие итерации.
				}
			}
			
		} while (!unique);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}