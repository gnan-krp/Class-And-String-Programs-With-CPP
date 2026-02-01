#include<iostream>
using namespace std;

class employee
{
    int salary, id;
    char name[20];

    public:
        void getdata();
        void display();
}e[5];

void employee::getdata()
{
    cout << "Enter The Name Of The Employee = " << endl;
    cin >> name;
    cout << "Enter The ID Of The Employee = " << endl;
    cin >> id;
    cout << "Enter The Salary Of The Employee = " << endl;
    cin >> salary;
}

void employee::display()
{
    cout << "Name Of The Employee Is = " << name << endl;
    cout << "ID Of The Employee Is = " << id << endl;
    cout << "Salary Of The Employee Is = " << salary << endl;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        e[i].display();
    }
    return 0;
}