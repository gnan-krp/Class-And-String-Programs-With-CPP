#include<iostream>
#include <string>
using namespace std;

void display(string &str)
{
    cout << "Size = " << str.size() <<endl;
    cout << "Length = " << str.length() << endl;
    cout << "Capacity = " << str.capacity() << endl;
    cout << "Maximum Size = " << str.max_size() << endl;
    cout << "Empty = " << (str.empty() ? "yes" : "no") << endl;
}

int main()
{
    string str1;
    cout << "Initial Status: " << endl;
    display(str1);

    cout << "Enter A String = " << endl;
    cin >> str1;
    cout << "Status Now: " << endl;
    display(str1);

    return 0;

}
