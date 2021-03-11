#include<iostream>
using namespace std;

#define tab "\t";

void Fill_Rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Shift(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

int Sum(int arr[], const int n, int s)
{
	for (int i = 0; i < n; i++)
	{
		int currentElement = arr[i];
		cout << currentElement << " ";
		s = s + currentElement;
	}
		cout << s << endl;
		return s;
}

int Avg(int arr[], const int n, int avg, int arif)
{
	for (int i = 0; i < n; i++) {
		int currEl = arr[i];
		avg = currEl * avg;
	}
	arif = avg / n;
	cout << arif << endl;
	return arif;
}

int Min(int arr[], const int n, int min) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Min = " << min << endl;
	return min;
}

int Max(int arr[], const int n, int max) {
	for (int i = 0; i < n; i++) {
		if (arr[0] > max)
			max = arr[0];
	}
	cout << "Max = " << max << endl;
	return max;
}


int main()
{
	/*
	setlocale(LC_ALL, "");
	cout << "Пытаюсь разобраться в теме" << endl;
	const int n = 5;
	int arr[n];
	// Запоняю массив случайными числами с помощью функции
	Fill_Rand(arr, n);
	
	// Вывожу массив на экран
	Print(arr, n);

	// Сдвигаю массив на заданное число с помощью функции: 
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	Shift(arr, n, number_of_shifts);
	
	// Вывожу полученный массив на экран: 
	Print(arr, n);

	const int m = 8;
	int brr;
	*/
	
	setlocale(LC_ALL, "");
	
	
	const int n = 5;
	int arr[n] = {2, 4, 6, 8, 10};
	int number_of_shifts = 2;
	//int max = arr[0];
	//int min = arr[0];
	//int avg = 1;
	//int arif = 1;

	Print(arr, n);

	//Min(arr, n, min);
	//Max(arr, n, max);

	//Fill_Rand(arr, n);

	//Avg(arr, n, avg, arif);

	//Sum(arr, n, s);

	Shift(arr, n, number_of_shifts);
	Print(arr, n);
}