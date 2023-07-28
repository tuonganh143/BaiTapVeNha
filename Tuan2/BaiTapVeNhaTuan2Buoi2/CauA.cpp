#include <iostream>
using namespace std;
int countDigits(int number)
{
    int count = 0;

    // Đảm bảo số đầu vào là số nguyên dương
    number = abs(number);

    // Đếm số lượng chữ số
    while (number > 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

int main()
{
    int number;

    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    int digitCount = countDigits(number);

    cout << "Sso chu so cua " << number << " la: " << digitCount << endl;

    return 0;
}