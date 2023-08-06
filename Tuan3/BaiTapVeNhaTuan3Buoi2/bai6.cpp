#include <iostream>
using namespace std;

// đếm số lần xh nhiều nhất chuỗi

char demMax(char* chuoi) {
    
    int arr[256] = {0}; // Mảng lưu tần số xuất hiện của từng ký tự, 256 là số lượng ký tự ASCII có thể có

    // Xây dựng bảng tần số
    int i = 0;
    while (chuoi[i] != '\0') {
        char ch = chuoi[i];
        arr[ch]++;
        i++;
    }

    // Tìm ký tự có tần số xuất hiện lớn nhất
    char countMax;
    int maxArr = 0;

    for (int ch = 0; ch < 256; ch++) {
        if (arr[ch] > maxArr) {
            countMax = char(ch);
            maxArr = arr[ch];
        }
    }

    return countMax;
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    char dem = demMax(chuoi);
    cout << "Ky tu xuat hien nhieu nhat trong chuoi la: " << dem << endl;

    return 0;
}
