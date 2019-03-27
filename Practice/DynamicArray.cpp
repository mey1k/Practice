#include <iostream>

using namespace std;


int main()
{
	int maxCount;

	cin >> maxCount;

	int *arrInteger = new int[maxCount];

	for (int i = 0; i < maxCount; i++)
	{
		arrInteger[i] = i;
	}

	for (int j = 0; j < maxCount; j++)
	{
		cout << arrInteger[j];
	}

	delete arrInteger;

	return 0;
}