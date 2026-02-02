#include<iostream>
using namespace std;

class player
{
    int len = 0;
    char name[20], rev[20];

public:
    void getname()
    {
        cout << "Enter A Player's Name = ";
        cin >> name;
    }

    void palindrome()
    {
        // find length
        for(int i = 0; name[i] != '\0'; i++)
        {
            len++;
        }

        // reverse string
        for(int i = 0; i < len; i++)
        {
            rev[i] = name[len - i - 1];
        }
        rev[len] = '\0';

        // check palindrome
        int flag = 1;
        for(int i = 0; i < len; i++)
        {
            if(name[i] != rev[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << "Player's Name Is Palindrome!";
        else
            cout << "Player's Name Is Not Palindrome!";
    }
} p;

int main()
{
    p.getname();
    p.palindrome();
    return 0;
}
