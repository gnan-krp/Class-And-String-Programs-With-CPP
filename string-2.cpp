// Program to find length of a string.
#include<iostream>
#include<string.h>
using namespace std;

class player
{
    char name[20];
    int len = 0;

    public:
        void getdata()
        {
            cout << "Enter A Player's Name = " << endl;
            cin >> name;
        }
        void length()
        {
            for(int i=0 ; name[i] != '\0' ; i++)
            {
                len++;
            }
            cout << "The Length Of The Player's Name Is = " << len;
        }
}p;

int main()
{
    p.getdata();
    p.length();

    return 0;
}