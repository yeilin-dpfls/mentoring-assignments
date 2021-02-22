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

	cout << "1번째 정수 입력:\n";
	cin >> num1;
	cout << "2번째 정수 입력:\n";
	cin >> num2;
	cout << "3번째 정수 입력:\n";
	cin >> num3;
	cout << "4번째 정수 입력:\n";
	cin >> num4;
	cout << "5번째 정수 입력:\n";
	cin >> num5;
}
void caculator::add()
{
	addresult = num1 + num2 + num3 + num4 + num5;
	cout << "합계 : << addresult;
}
int main(void)
{
	caculator cal;
	cal.init();
	cal.add();

}
