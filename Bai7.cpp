#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Pt co 2 nghiem phan biet:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        cout << "Pt co nghiem kep:" << endl;
        cout << "x = " << x << endl;
    }
    else
    {
        cout << "Pt vo nghiem" << endl;
    }

    return 0;
}