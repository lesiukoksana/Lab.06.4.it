#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Count(int* a, const int size)
{
	int A, B;

	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;

	int k = 0;


	for (int i = 0; i < size; i++)
		if (a[i] > A && a[i] < B)
		{
			k++;
		}

	return k;
}

int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int Sum(int* a, const int size)
{
	int S = 0;
	const int n = 9;

	int max = Max(a, n);

	int position = 0;

	for (int i = 0; i < size; i++) {
		if (a[i] >= max) {
			max = a[i];
			position = i;
		}
	}

	for (int i = position + 1; i < n; i++) {

		S += a[i];

	}

	return S;
}



void Sort(int* a, const int size) 
{
	for (int i = 0; i < size - 1; i++) 
	{
		int max = abs(a[i]); 
		int imax = i;
		for (int j = i + 1; j < size; j++)
			if (max < abs(a[j]))
			{
				max = abs(a[j]);
				imax = j;
			}
		a[imax] = abs(a[i]); 
		a[i] = max; 
	}
}



int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 9;
	int a[n];

	int Low = -100;
	int High = 100;

	Create(a, n, Low, High);
	Print(a, n);

	int k = 0;


	cout << "Count = " << Count(a, n) << endl;

	cout << "max = " << Max(a, n) << endl;

	cout << "Sum = " << Sum(a, n) << endl;

	Sort(a, n);
	Print(a, n);

	return 0;
}