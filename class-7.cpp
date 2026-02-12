#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    double P, r, V;

    for (P = 1000; P <= 10000; P += 1000)   // Principal
    {
        cout << "\n====================================\n";
        cout << "Principal = " << P << endl;
        cout << "====================================\n";

        for (r = 0.10; r <= 0.20; r += 0.01)   // Rate
        {
            cout << "\nRate = " << r * 100 << "%\n";
            cout << "Year\tValue\n";

            V = P;   // starting principal

            for (int n = 1; n <= 10; n++)   // Years
            {
                V = V * (1 + r);   // recursive formula
                cout << n << "\t" << V << endl;
            }
        }
    }

    return 0;
}
