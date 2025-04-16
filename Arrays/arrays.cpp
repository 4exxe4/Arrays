﻿//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	arr[1] = 1024; //обращается к элементу массива на запись
	cout << arr[1] << endl; //обращаемся к элементу массива на чтение

	cout << "Введите элементы массива: "; //инициализация элементов массива с клавиатуры
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// вывод в прямом порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// вывод в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// вычисление суммы среднего-арифметического:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое массива: " << (double)sum / n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
/*
Массивы

Массив (Array) - это набор переменных одного типа в непрерывной области памяти.

Массивы бывают:
1) Динамические
2) Статические

Количество элементов статического массива может быть задано лишь целочисленным константным значением на этапе написания кода.
Размер статического массива невозможно изменить после компиляции.

Размер динамического массива может быть задан переменным значением на этапе выполнения программы.
Предварительно это переменное значение можно вычислить или ввести с клавиатуры.

Одномерные, двумерные, трехмерные, …, многомерные:
Количество измерений массива ничем не ограничивается.

Массивы объявляются следующим образом:

type name [SIZE];

type - тип элементов массива.
Элементы одного массива могут одного определенного типа. В одном массиве не может быть один элемент bool, второй double, третий long и тд.
В массив можно определить элементы любого существующего типа.

name - имя массива. Для именования массива используются такие же идентификаторы, как и для наименования переменных.

SIZE - количество элементов массива. Может быть задано лишь целочисленным константным значением.

Обычно массивы объявляют так:
const int n = 5;
int arr[n];

Обращение к элементам массива:

Для того, чтобы обратиться к элементу массива, нужно указать его номер в квадратных скобках после имени массива.
К элементам массива, так же как и к обычным переменным, можно обращаться на чтении и запись.
Элементы массива нумеруются с нуля, поэтому последний элемент будет на 1 меньше.
То есть в массиве из пяти элементов отсутствует пятый элемент.

Элементы - value
Над элементами - индекс

Для обращения к элементам массива очень удобно использовать цикл for, поскольку у него есть счетчик i/, который можно задавать в качестве номера элемента.

Инициализация

При объявлении массива его элементы заполнены мусором. Для того, чтобы убрать из массива мусор, его нужно проинициализировать.
Для инициализации массива нужно перечислить значение его элементов в фигурных скобках через запятую. Элементы, значения которых не указаны при инициализации, получают значение по умолчанию. Для числовых типов это 0

*/