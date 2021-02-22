
#include <iostream>
using namespace std;
class Calculator
{
private:
	int num;
	int result1;
	int result2;
	int result3;
	int result4;
	int result5;
	int result6;
	int result7;
	int result8;
	int result9;
public:
	void Init();
	void Mul(); 
};
void Calculator::Init(){
	cin >> num;
}
void Calculator::Mul()
{
	result1 = num * 1;
	result2 = num * 2;
	result3 = num * 3;
	result4 = num * 4;
	result5 = num * 5;
	result6 = num * 6;
	result7 = num * 7;
	result8 = num * 8;
	result9 = num * 9;

	cout << num << " x 1=" << result1 << endl;
	cout << num << " x 2=" << result2 << endl;
	cout << num << " x 3=" << result3 << endl;
	cout << num << " x 4=" << result4 << endl;
	cout << num << " x 5=" << result5 << endl;
	cout << num << " x 6=" << result6 << endl;
	cout << num << " x 7=" << result7 << endl;
	cout << num << " x 8=" << result8 << endl;
	cout << num << " x 9=" << result9 << endl;

}

int main(void)
{
	Calculator cal;
	cal.Init();
	cal.Mul();	
}
