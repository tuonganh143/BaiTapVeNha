#include <iostream>
using namespace std;

// 2 kiểm tra mảng đối xứng

bool kiemTraDX(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu khong hop le!" <<endl;
        return 1;
    }

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (kiemTraDX(arr, n)) {
        cout << "Mang la doi xung." <<endl;
    } else {
        cout << "Mang khong doi xung." << endl;
    }

    return 0;
}
