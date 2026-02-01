//area of rectangle using class.
#include<iostream>
using namespace std;

class rectangle
{
    float l,b,ans;

    public:
        void getdata();
        void display();
        void area();
}r;

void rectangle::getdata()
{
    cout << "Enter The Dimensions Of The Rectangle = ";
    cin >> l >> b;
}

void rectangle::display()
{
    cout << "The Dimensions Of The Rectangle Are:" << endl;
    cout << "l = " << l << endl;
    cout << "b = " << b << endl;
}

void rectangle::area()
{
    ans = l*b;
    cout << "Area Of The Rectange Is = " << ans << endl;
}

int main()
{
    r.getdata();
    r.display();
    r.area();
    return 0;
}