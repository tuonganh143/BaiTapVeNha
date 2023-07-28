#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    int gcd = 1; // Khởi tạo ước chung ban đầu

    // Tìm ước chung lớn nhất (GCD)
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << gcd << endl;

    return 0;
}