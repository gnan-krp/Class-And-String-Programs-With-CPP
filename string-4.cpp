#include<iostream>
using namespace std;

class name
{
    char name[20], rev[20];
    int id, len=0;

    public:
        void getdata()
        {
            cout << "Enter ID Of The Student = " << endl;
            cin >> id;

            cout << "Enter The Name Of The Student = " << endl;
            cin >> name;
        }
        void reverse()
        {
            for(int i=0 ; name[i] != '\0' ; i++)
            {
                len++;
            }

            for(int i=0; i<len ; i++)
            {
                rev[i] = name[len-i-1];
            }
            rev[len] = '\0';
            cout << "After Reversing The Name = " << rev << endl;
        }
}s;

int main()
{
    s.getdata();
    s.reverse();

    return 0;
}
