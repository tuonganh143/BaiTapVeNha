#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Nhap vao mot so nguyen: ";
    cin >> number;

    int sum = 0;
    int tempNumber = number;

    while (tempNumber != 0)
    {
        int digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }

    cout << "Tong cac chu so " << number << " la: " << sum << endl;

    return 0;
}