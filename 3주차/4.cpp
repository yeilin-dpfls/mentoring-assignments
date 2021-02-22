#include <iostream>
using namespace std;

class Calculator {
private:
    int numOfAdd;
    int numOfMin;
    int numOfMul;
    int numOfDiv;
    double numa;
    double numb;
    char sign;

public:
    void Init();
    double Add(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    double Div(double num1, double num2);
    void ShowOpCount();
};

void Calculator:: Init() 
{
    numofAdd = 0;
    numofMin = 0;
    numofMul = 0;
    numofDiv = 0;
    cin >> numa;
    cin >> sign;
    cin >> numb;
}

double Calculator::Add(double num1, double num2) 
{ 
    addresult = numa + numb;
    cout << numa << "+" << numb <<"=" << addresult<< endl;
    numofAdd++;
 
}

double Calculator::Min(double num1, double num2)
{
    minresult = numa - numb;
    cout << numa << "-" << numb <<"=" << minresult<< endl;
    numofMin++;
}


double Calculator::Mul(double num1, double num2)
{
    mulresult = numa * numb;
    cout << numa << "x" << numb <<"=" << mulresult<< endl;
    numofMul++;
}

double Calculator::Div(double num1, double num2) {
   
    divresult = numa / numb;
    cout << numa << "/" << numb <<"=" << divresult << endl ;
    numofDiv++; 
}

void Calculator::ShowOpCount() 
{
    cout << "덧셈: " << numofAdd;
    cout << " 뺄셈: " << numofMin;
    cout << " 곱셈: " << numofMul;
    cout << " 나눗셈: " << numofDiv;
    
}

int main(void)
{
    Calculator cal; 
    if sign == '+'
        cal.Add();
    if sign == '-'
        cal.Min();
    if sign == '*'
        cal.Mul();
    if sign == '/'
        cal.Div();
}
