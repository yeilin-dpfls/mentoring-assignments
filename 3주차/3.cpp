#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Carculator {
private:
    int randomnum;
    int i;

public:
    void Init();
    int random();
};
void Carculator :: Init()
{
    int randomnum= 0;
    int i = 0;

}
int Carculator :: random()
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        randomnum = rand() % 101;
        cout << random;
    }
}
int main()
{
    Carculator cal;
    cal.Init();
    cal.random();

}