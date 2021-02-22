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
	void add();
	
};
void caculator::init()
{

	cout << "1번째 정수 입력: ";
	cin >> num1;
	cout << endl << "2번째 정수 입력: ";
	cin >> num2;
	cout << endl << "3번째 정수 입력: ";
	cin >> num3;
	cout << endl << "4번째 정수 입력: ";
	cin >> num4;
	cout << endl << "5번째 정수 입력: ";
	cin >> num5;
}
void caculator::add()
{
	addresult = num1 + num2 + num3 + num4 + num5;
	cout << "합계 : " << addresult;
}
int main(void)
{
	caculator cal;
	cal.init();
	cal.add();

}
