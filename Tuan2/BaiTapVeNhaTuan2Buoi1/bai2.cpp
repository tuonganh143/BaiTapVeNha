#include <iostream>
using namespace std;
int main()
{
    int i, n;
    long S = 0, P = 1;
    do
    {
        cout << "Nhap vao so n: ";
        cin >> n;
        if (n < 1)
        {
            cout << "So n phai lon hon hoac bang 1, vui long nhap lai!";
        }
    } while (n < 1);
    // sử dụng vòng lặp for để tính biểu thức
    for (int i = 1; i <= n; i++)
    {
        P = P * i;
        S = S + P;
    }
    cout << "Tong cua biet thuc: " << S;
}