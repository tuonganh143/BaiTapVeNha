#include <iostream>
#include <cstring>
using namespace std;

// kiểm tra đối xứng

bool kiemTraDX(const char* chuoi) {
    int dodaichuoi = strlen(chuoi);
    for (int i = 0; i < dodaichuoi / 2; i++) {
        if (chuoi[i] != chuoi[dodaichuoi - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    if (kiemTraDX(chuoi)) {
        cout << "Chuoi la doi xung." << endl;
    } else {
        cout << "Chuoi khong la doi xung." << endl;
    }

    return 0;
}
