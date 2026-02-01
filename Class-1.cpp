#include <iostream>
using namespace std;

class student 
{
    int rollNo, total;
    char name[20];
    float m1, m2, m3, average;

public:
    void getdata();
    void display();
    void calculate();
    static void highest(student s[], int n);
}s[5];

void student::getdata() {
    cout << "Enter Name = ";
    cin >> name;
    cout << "Enter Roll Number = ";
    cin >> rollNo;
    cout << "Enter Marks Of Three Subjects = ";
    cin >> m1 >> m2 >> m3;
}

void student::display() {
    cout << "\nName = " << name << endl;
    cout << "Roll Number = " << rollNo << endl;
    cout << "Marks = " << m1 << " " << m2 << " " << m3 << endl;
}

void student::calculate() {
    total = m1 + m2 + m3;
    average = total / 3.0;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
}

void student::highest(student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].total > s[maxIndex].total) {
            maxIndex = i;
        }
    }
    cout << "\nHighest Scorer is: " << s[maxIndex].name << endl;
    cout << "Roll No: " << s[maxIndex].rollNo << endl;
    cout << "Total Marks: " << s[maxIndex].total << endl;
}

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        s[i].getdata();
    }

    for (i = 0; i < 5; i++) {
        s[i].display();
        s[i].calculate();
    }

    student::highest(s, 5);

    return 0;
}
