// Program using static data members.
#include <iostream>
using namespace std;

class Student
{
    int roll;
    static int count;   // static data member

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1, s2;

    s1.getData();
    s1.display();

    s2.getData();
    s2.display();

    return 0;
}
