#include <iostream>
using namespace std;
int SoNghichDao(int number)
{
    int soNghichDao = 0;
    while (number > 0)
    {
        soNghichDao = soNghichDao * 10 + number % 10;
        number /= 10;
    }
    return soNghichDao;
}

int main()
{
    int n;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;

    int nghichdao = SoNghichDao(n);

    cout << "So dao cua " << n << " la: " << nghichdao << endl;

    return 0;
}