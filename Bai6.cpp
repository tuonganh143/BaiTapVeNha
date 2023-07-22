#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    // Sắp xếp các số theo th tự tăng dần
    if (a > b)
    {
        float temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        float temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        float temp = a;
        a = b;
        b = temp;
    }

    cout << "Cac so theo thu tu tang dan la: " << a << ", " << b << ", " << c << endl;

    return 0;
}