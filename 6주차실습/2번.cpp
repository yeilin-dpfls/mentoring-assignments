#include <iostream>
#include <cstdio>

using namespace std;

class Printer
{
private:
	string inputstring;

public:
	string SetString(string);
	void ShowString();
};

string Printer :: SetString(string)
{
	cin >> inputstring; 
	return inputstring;
}

void Printer :: ShowString()
{
	cout << inputstring;
}

int main(void) {
	Printer pnt;
	pnt.SetString(¡°Hello World¡±);
	pnt.ShowString();

	pnt.SetString(¡°I Love C++¡±);
	pnt.ShowString();

	return 0;
}
