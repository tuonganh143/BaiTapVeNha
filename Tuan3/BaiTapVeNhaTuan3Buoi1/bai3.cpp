#include <iostream>
using namespace std;

// 3 Đếm và in phần tử xuất hiện 1 lần trong mảng

bool demSoLanXuatHien(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
            if (count > 1) {
                return true;
            }
        }
    }
    return false;
}

void inMangXuatHienMotLan(int arr[], int n) {
    bool danhdau[n] = {false};
    for (int i = 0; i < n; i++) {
        if (!danhdau[i] && !demSoLanXuatHien(arr, n, arr[i])) {
            cout << arr[i] << " ";
            danhdau[i] = true;
        }
    }
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

    cout << "Cac phan tu xuat hien dung mot lan trong mang la: ";
    inMangXuatHienMotLan(arr, n);
    cout <<endl;

    return 0;
}
