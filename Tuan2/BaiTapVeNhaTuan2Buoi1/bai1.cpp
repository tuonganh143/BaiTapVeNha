#include <iostream>
using namespace std;
int main()
{
    int n;
    float S;
    S = 0;
    do
    {
        cout << "Nhap vao so n: ";
        cin >> n;
        if (n < 1)
        {
            cout << "So n phai lon hon hoac bang 1, vui long nhap lai!";
        }
    } while (n < 1);
    // tính biểu thức bằng vòng lặp for
    for (int i = 1; i <= n; i++)
    {
        S = S + 1.0 / (2 * i);
    }
    cout << "S = 1/2 + 1/4 + ... + 1/" << n * 2 << " la: " << S;
}