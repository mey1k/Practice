// isUniqueChars.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.
//
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A
{
public:
	A() { cout << "a()" << endl; }
	virtual ~A() { cout << "~a()" << endl; };
	
	//vector<int> map;
	
	virtual void insertInteger()
	{
		map.push_back(1);
	}

	virtual int getResult()
	{
		return map[0];
	}

protected:
	vector<int> map;
};


class B : public A
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; };

	void insertInteger()
	{
		map.push_back(2);
	}

	int getResult()
	{
		return map[0];
	}
};

int main()
{
	A *instance = new B();

	instance->insertInteger();

	cout << instance->getResult() << endl;

	delete instance;

	return 0;
}