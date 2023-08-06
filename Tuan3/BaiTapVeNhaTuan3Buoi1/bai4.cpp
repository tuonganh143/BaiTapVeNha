#include <iostream>
using namespace std;

// 4 tìm vị trí phần tử có giá trị âm lớn nhất

int timViTriPhanTuCoGiaTriAm_Max(int arr[], int n){
    
    int viTriMaxAm = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && (viTriMaxAm == -1 || arr[i] > arr[viTriMaxAm]))
        {
            viTriMaxAm = i;
        }
        
    }
    
    return viTriMaxAm;
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

    int index = timViTriPhanTuCoGiaTriAm_Max(arr, n);
    if (index != -1) {
        cout << "Vi tri phan tu co gia tri am lon nhat la : " << index <<endl;
        cout << "Gia tri cua phan tu la : " << arr[index] <<endl;
    } else {
        cout << "Khong co phan tu am trong mang." <<endl;
    }
    cout <<endl;

    return 0;
}
