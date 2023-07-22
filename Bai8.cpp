#include <iostream>
using namespace std;

bool CheckTamgiac(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return false;
    if (a + b > c && b + c > a && c + a > b)
        return true;
    return false;
}

void LoaiTamGiac(int a, int b, int c)
{
    if (a == b && b == c)
        cout << "Tam giac deu" << endl;
    else if (a == b || b == c || c == a)
        cout << "Tamac can" << endl;
    else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        cout << "Tam giac vuong" << endl;
    else
        cout << "Tam giac thuong" << endl;
}

int main()
{
    int a, b, c;
    cout << "Nhap vao 3 so duong: ";
    cin >> a >> b >> c;

    if (CheckTamgiac(a, b, c))
    {
        cout << "Day la mot tam giac." << endl;
        LoaiTamGiac(a, b, c);
    }
    else
    {
        cout << "Day khong phai la mot tam giac." << endl;
    }

    return 0;
}