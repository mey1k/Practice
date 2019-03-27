#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int n = 5;

	//cin >> n;

	int arr1[5] = { 9, 20, 28, 18, 11 };
	int arr2[5] = { 30, 1, 21, 17, 28 };

	for (int i = 0; i < n; i++)
	{
		int result = arr1[i] | arr2[i];

		string strBinary = bitset<5>(result).to_string();

		for (size_t j = 0; j < strBinary.size(); j++)
		{
			if (strBinary[j] == '1')
				strBinary[j] = '#';
			else
				strBinary[j] = ' ';
		}

		cout << strBinary << endl;

		//cout << bitset<5>(result).to_string() <<endl;
	}
}