#include <iostream>
using namespace std;
int TinhTongChuSoChan(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10; // Lấy chữ số cuối cùng

        if (digit % 2 == 0)
        {
            sum += digit;
        }

        n /= 10; // Loại bỏ chữ số cuối cùng
    }

    return sum;
}

int main()
{
    int number;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    int tongChuSoChan = TinhTongChuSoChan(number);
    cout << "Tong cac chu so chan cua so " << number << " la: " << tongChuSoChan << endl;

    return 0;
}