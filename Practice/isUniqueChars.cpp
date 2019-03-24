// isUniqueChars.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
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