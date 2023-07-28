#include <iostream>
using namespace std;
int TinhTongChuSo(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // Lấy chữ số cuối cùng của n và cộng vào tổng
        n /= 10;       // Loại bỏ chữ số cuối cùng của n
    }
    return sum;
}

int main()
{
    int number;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    int tong = TinhTongChuSo(number);
    cout << "Tong cac chu so cua so " << number << " la: " << tong << endl;

    return 0;
}