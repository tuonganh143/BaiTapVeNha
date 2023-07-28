#include <iostream>
using namespace std;
int TinhTongChuSoLe(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
        {
            sum += digit;
        }
        n /= 10;
    }

    return sum;
}

int main()
{
    int number;

    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    int tongChuSoLe = TinhTongChuSoLe(number);

    cout << "Tong cac chu so le cua so " << number << " la: " << tongChuSoLe << endl;

    return 0;
}