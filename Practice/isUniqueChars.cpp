// isUniqueChars.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.
//

#include <iostream>
#include <string>

using namespace std;

bool isUniqueChars(string chars)
{
	if (chars.size() > 256) false;

	bool *charSet = new bool[256];

	//for (int i = 0;)

	vector<int> j;
}

void main()
{
	string chars;

	cin >> chars;

	cout << isUniqueChars(chars) << endl;
}