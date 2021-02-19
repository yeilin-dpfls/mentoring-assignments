#include <iostream>
using namespace std;
class Calculator
{
private:
	int numOfMul;
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
	double Mul(double num1, double num2);
};
void Calculator::Init(){
	cin >> num;
}
double Calculator::Mul(double num1, double num2) {
	result1 = num * 1;
	result2 = num * 2;
	result3 = num * 3;
	result4 = num * 4;
	result5 = num * 5;
	result6 = num * 6;
	result7 = num * 7;
	result8 = num * 8;
	result9 = num * 9;

    cout << "%d x 1 = %d\n", num, result1;
	cout << "%d x 2 = %d\n", num, result2;
	cout << "%d x 3 = %d\n", num, result3;
	cout << "%d x 4 = %d\n", num, result4;
	cout << "%d x 5 = %d\n", num, result5;
	cout << "%d x 6 = %d\n", num, result6;
	cout << "%d x 7 = %d\n", num, result7;
	cout << "%d x 8 = %d\n", num, result8;
	cout << "%d x 9 = %d\n", num, result9;
}
int main(void) {
	Calculator cal;
	cal.Init();
	cal.Mul();	
}
