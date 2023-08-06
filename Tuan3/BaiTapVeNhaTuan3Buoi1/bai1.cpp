#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiemTraSNT(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
// Hàm nhập dãy tăng dần từ người dùng (nếu người dùng nhập kh theo thứ tự thì mời nhập lại đến già)
void nhapMang(int a[], int n) {
    cout << "Nhap cac phan tu cua mang tang dan: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0 && a[i] <= a[i - 1]) {
            cout << "Khong phai day tang dan. Nhap lai!" << endl;
            i--;
        }
    }
}
// cout các số nguyên tố trong mảng
void inMang(int a[], int n) {
    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < n; i++) {
        if (kiemTraSNT(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 1;
    }

    nhapMang(a, n);

    inMang(a, n);

    return 0;
}
