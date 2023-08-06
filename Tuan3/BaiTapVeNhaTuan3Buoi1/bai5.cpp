#include <iostream>
using namespace std;

// 5 xóa phần tử có chỉ số k

int xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        return 0; // Trả về 0 nếu k không hợp lệ
    }

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1]; // ghi đè 
    }

    n--; 

    return 1; // Trả về 1 khi xóa thành công
}

int main() {
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 1;
    }

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Nhap chi so k muon xoa: ";
    cin >> k;

    int kq = xoaPhanTu(a, n, k);
    if (kq == 0) {
        cout << "Khong co phan tu nao duoc xoa" << endl;
    } else {
        cout << "Mang sau khi xoa cac phan tu: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
