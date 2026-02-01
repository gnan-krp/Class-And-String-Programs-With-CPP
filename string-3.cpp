// Program to find reverse of a string
#include <iostream>
using namespace std;

class player
{
    char name[20], rev[20];
    int len = 0;

public:
    void getdata()
    {
        cout << "Enter a player's name: ";
        cin >> name;
    }

    void reverse()
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            len++;
        }

        for (int i = 0; i < len; i++)
        {
            rev[i] = name[len - i - 1];
        }
        rev[len] = '\0';

        cout << "Reversed name = " << rev << endl;
    }
};

int main()
{
    player p;
    p.getdata();
    p.reverse();
    return 0;
}
