#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Nhap so thu nhat: ";
    cin >> num1;

    cout << "Nhap so thu 2: ";
    cin >> num2;

    cout << "Nhap so thu ba: ";
    cin >> num3;

    // Tìm số lớn nhất
    int maxNum = num1;
    if (num2 > maxNum)
    {
        maxNum = num2;
    }
    if (num3 > maxNum)
    {
        maxNum = num3;
    }

    // Tìm số nh nhất
    int minNum = num1;
    if (2 < minNum)
    {
        minNum = num2;
    }
    if (num3 < minNum)
    {
        minNum = num3;
    }

    cout << "So lon nhat la: " << maxNum << endl;
    cout << "So nho nhat la: " << minNum << endl;

    return 0;
}
