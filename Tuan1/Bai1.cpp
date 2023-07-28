#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Nhap vao 4 chu so ";
    cin >> number;

    // Tách các chữ số
    int digit1 = number / 1000;
    int digit2 = (number % 1000) / 100;
    int digit3 = (number % 100) / 10;
    int digit4 = number % 10;

    // Tính tổng các chữ số
    int sum = digit1 + digit2 + digit3 + digit4;

    // Lặp lại quá trình tính tổng cho đến khi tổng chỉ còn 1 chữ số
    while (sum >= 10)
    {
        int tempSum = 0;
        while (sum > 0)
        {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    cout << "So nut la: " << sum << endl;

    return 0;
}