#include <iostream>
using namespace std;

class Calculator {
private:
    int numOfAdd;
    int numOfMin;
    int numOfMul;
    int numOfDiv;
    double addresult;
    double minresult;
    double mulresult;
    double divresult;

public:
    void Init();
    double Add(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    double Div(double num1, double num2);
    void ShowOpCount();
    char sign;
    double num1;
    double num2;
};

void Calculator::Init()
{
    numOfAdd= 0;
    numOfMin = 0;
    numOfMul = 0;
    numOfDiv = 0;
    num1 = 0;
    num2 = 0;
    addresult = 0; 
    minresult = 0;
    mulresult = 0;
    divresult = 0;
    cin >> num1;
    cin >> sign;
    cin >> num2;
}

double Calculator::Add(double num1, double num2)
{
    addresult = num1 + num2;
    cout << num1<< "+" << num2<< "=" << addresult << endl;
    numOfAdd++;
    return addresult;

}

double Calculator::Min(double num1, double num2)
{
    minresult = num1 - num2;
    cout << num1 << "-" << num2 << "=" << minresult << endl;
    numOfMin++;
    return minresult;
}


double Calculator::Mul(double num1, double num2)
{
    mulresult = num1* num2;
    cout << num1<< "x" << num2<< "=" << mulresult << endl;
    numOfMul++;
    return mulresult;
}

double Calculator::Div(double num1, double num2) {

    divresult = num1 / num2;
    cout << num1 << "/" << num2 << "=" << divresult << endl;
    numOfDiv++;
    return divresult;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << numOfAdd;
    cout << " 뺄셈: " << numOfMin;
    cout << " 곱셈: " << numOfMul;
    cout << " 나눗셈: " << numOfDiv;

}

int main(void)
{
    Calculator cal;
    cal.Init();
  
    if (cal.sign == '+')
        cal.Add(cal.num1, cal.num2);
    if (cal.sign == '-')
        cal.Min(cal.num1, cal.num2);
    if (cal.sign == '*')
        cal.Mul(cal.num1, cal.num2);
    if (cal.sign == '/')
        cal.Div(cal.num1, cal.num2);
    cal.ShowOpCount();
}
