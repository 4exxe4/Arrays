#include <iostream>
using namespace std;

//#define BINARY
//#define HEX

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "Введите целое число: "; cin >> number;

	if (number < 0)
	{
		cout << "Введите положительное число" << endl;
	}
#ifdef BINARY
	if (number == 0)
	{
		cout << "Ваше число в двоичном представлении: 0" << endl;
	}

	const int n = 32;
	int arr[n];
	int index = 0;

	while (number > 0)
	{
		arr[index] = number % 2;
		number /= 2;
		index++;
	}

	cout << "Ваше число в двоичном виде: ";
	for (int i = index - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;
}
#endif

#ifdef HEX
	if (number == 0)
	{
		cout << "Ваше число в шестнадцатеричной системе: 0" << endl;
	}

	const char n = 16;
	const char x = 32;

	char hexsymbols[n] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	char hex[x];
	int index = 0;

	while (number > 0)
	{
		int remainder = number % 16;
		hex[index] = hexsymbols[remainder];
		number /= 16;
		index++;
	}

	cout << "Ваше число в шестандцатеричной системе: ";
	for (int i = index - 1; i >= 0; i--)
	{
		cout << hex[i];
	}
	cout << endl;
}
#endif
