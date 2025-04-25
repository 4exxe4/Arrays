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
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//ѕоиск повторений:
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; //предаположим, что выбранное значение раньше не встречалось
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before)continue;
		// лючевое слово "continue" прерывает текущую итерацию, и переходит к следующей.

		int count = 0;
		for (int j = i+1; j < n;j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 0) cout << "«начение " << arr[i] << " повтор€етс€ " << count << " раз\n";
	}
}