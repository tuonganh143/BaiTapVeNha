#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void printPrimes(int n)
{
    cout << "Cac so nguyen to nho hon " << n << " la:\n";

    for (int i = 2; i < n; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Nhap mot so nguyen n (n < 100): ";
    cin >> n;

    if (n >= 100)
    {
        cout << "Nhap sai dieu kien. Vui long nhap lai.\n";
        return 0;
    }

    printPrimes(n);

    return 0;
}