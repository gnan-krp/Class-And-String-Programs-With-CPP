#include<iostream>
using namespace std;

class employee
{
    int id;
    char name[20];
    float salary;

    public:
        void getdata()
        {
            cout << "Enter The ID Of The Employee = " << endl;
            cin >> id;

            cout << "Enter The Name Of The Employee = " << endl;
            cin >> name;

            cout << "Enter The Salary Of The Employee = " << endl;
            cin >> salary;
        }
        void output()
        {
            cout << "The ID Of The Employee Is = " << id << endl;
            cout << "The Name Of The Employee Is = " << name << endl;
            cout << "The Salary Of The Employee Is = " << salary << endl;
        }
        float getsalary()
        {
            return salary;
        }
};

int main()
{
    int i, n;

    cout << "Enter Number Of Employes = " << endl;
    cin >> n;

    employee *e = new employee[n];

    for(int i=0; i<n ; i++)
    {
        cout << "Enter The Details Of The Employee = " << endl;
        e[i].getdata();
    }

    for(int i=0; i<n ; i++)
    {
        cout << "The Details Of The Employee Are = " << endl;
        e[i].output();
    }

    int maxIndex = 0;

    for(int i=0; i<n ; i++)
    {
        if(e[i].getsalary() > e[maxIndex].getsalary())
            maxIndex = i;
    }
    cout << "Employee With Highest Salary : " << endl;
    e[maxIndex].output();

    return 0;
}