#include <iostream>
#include <math.h>
using namespace std;
const int pi = 3.14;
int main()
{
    double x, bai1, bai2;
    cout << "Nhap x:";
    cin >> x;
    bai1 = 4 * ((x * x) + (10 * x * sqrt(x)) + (3 * x) + 1);
    bai2 = (sin(pi * x * x) + sqrt(sqrt(x * x + 1))) / (exp(2 * x) + cos((pi / 4) * x));

    cout << "Bai 1:" << bai1 << endl;
    cout << "Bai 2:" << bai2 << endl;
}