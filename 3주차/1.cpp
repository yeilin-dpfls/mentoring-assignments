#include  <iostream>
using namespace std;

class caculator
{
private:
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int addresult;

public:
	void init();
	double add(double num1, double num2);
	
};
void caculator::init()
{

	cout << "1��° ���� �Է�:\n";
	cin >> num1;
	cout << "2��° ���� �Է�:\n";
	cin >> num2;
	cout << "3��° ���� �Է�:\n";
	cin >> num3;
	cout << "4��° ���� �Է�:\n";
	cin >> num4;
	cout << "5��° ���� �Է�:\n";
	cin >> num5;
}
double caculator::add(double num1, double num2)
{
	addresult = num1 + num2 + num3 + num4 + num5;
	cout << "�հ� : %d", addresult;
}
int main(void)
{
	caculator cal;
	cal.init();
	cal.add();

}