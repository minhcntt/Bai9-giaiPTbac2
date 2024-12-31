// Bai9-giaiPTbac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void giaiPTB1(double so1, double so2) {
    if (so1 != 0)
    {
        cout << "vi a =0 nen phuong trinh co 1 nghiem x =" << -so1 / so2;
    }
    else
    {
        if (so2 == 0)
        {
            cout << "vi a =0 nen phuong trinh co nghiem dung voi moi x";
        }
        else
        {
            cout << "vi a =b =0, c <> = nen phuong trinh vo nghiem";
        }
    }
}
int main()
{
    cout << "Giai Phuong Trinh Bac 2: ax^2 + bx + c = 0\n";
    int a, b, c;
    double dt, x1, x2;
    cout << "nhap a :"; cin >> a;
    cout << "nhap b :"; cin >> b;
    cout << "nhap c :"; cin >> c;
    if (a == 0)
    {
        giaiPTB1(b, c);
    }
    else
    {
        // a khac 0
        dt = b * b - 4 * a * c;
        if (dt < 0)
        {
            cout << "phuong trinh vo nghiem\n";
        }
        else if (dt == 0) {
            cout << "phuong trinh co nghiem kep\n";
            x1 = -b / (2 * a);
            cout << "x1 = x2 = " << x1;
        }
        else {
            cout << "phuong trinh co 2 nghiem phan biet\n";
            x1 = (-b + sqrt(dt)) / (2 * a);
            x2 = (-b - sqrt(dt)) / (2 * a); 
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;

        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
