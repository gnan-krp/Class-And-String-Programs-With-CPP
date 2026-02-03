#include<iostream>
using namespace std;

class matrix
{
    int arr[20][20];
    int m, n;

public:
    void getdata()
    {
        cout << "Enter number of rows and columns: ";
        cin >> m >> n;

        cout << "Enter matrix elements:\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void display()
    {
        cout << "Matrix is: " << endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}m;

int main()
{
    m.getdata();
    m.display();

    return 0;
}
