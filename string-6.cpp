#include<iostream>
using namespace std;

int main()
{
    string s1("hi how are you?");
    string s2("I am fine!");
    string s3("Information");

    int len = s1.length();
    cout << "s1 length = " << len << endl;

    int len2 = s2.length();
    cout << "s2 length = " << len2 << endl;
    

    s1.compare(s2);

    if(s1 == s2)
        cout << "String Same : TRUE" << endl;

    else
    {
        cout << "String Same : FALSE" << endl;
    }

    cout << "String Before Functions = " << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    s1.insert(2,s2);

    cout << "s1 after insert = " << s1 << endl;

    s1.erase(1,2);
    cout << "s1 after erase = " << s1 << endl;

    s1.swap(s2);

    cout << "s1 after swap = " << s1 << endl;

    s1.replace(6,3,s3);
    cout << "s1 after replace = " << s1 << endl;

    int size = s1.size();

    cout << "s1 size = " << size << endl;

    return 0;
}