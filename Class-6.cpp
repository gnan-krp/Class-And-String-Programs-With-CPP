#include<iostream>
using namespace std;

class temp
{
    float fahr, cel;

    public:
        void gettemp();
        void celsius();
}t;

void temp::gettemp()
{
    cout << "Enter The Temperature In Fahrenheit = " << endl;
    cin >> fahr;
}

void temp::celsius()
{
    cel = 5.0/9.0*(fahr - 32);
    cout << "Tempersture In Celsius  = " << cel << endl;
}

int main()
{
    t.gettemp();
    t.celsius();

    return 0;
}