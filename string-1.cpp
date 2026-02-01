// Read And Display A String.
#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int id;
    char name[20];

    public:
        void read()
        {
            cout << "Enter The Id Of The Student = " << endl;
            cin >> id;
            cout << "Enter The Name Of The Student = " << endl;
            cin >> name;
        }
        void display()
        {
            cout << "The Id Of The Student Is = " << id << endl;
            cout << "The Name Of The Student Is = " << name << endl;
        }
}s;

int main()
{
    s.read();
    s.display();
    
    return 0;
}