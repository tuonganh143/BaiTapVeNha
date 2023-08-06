#include <iostream>
#include <cstring>
using namespace std;

// nhập từ và xóa từ đó trong chuỗi

void xoa(char* chuoi, const char* tu) {
    int dodaitu = strlen(tu);
    char* vitri = nullptr;

    while ((vitri = strstr(chuoi, tu)) != nullptr) {
        // Xóa(dịch phần còn lại của chuỗi lên trên)
        memmove(vitri, vitri + dodaitu, strlen(vitri + dodaitu) + 1);
    }
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];
    char tu[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    cout << "Nhap vao tu can xoa: ";
    cin.getline(tu, maxLength);

    xoa(chuoi, tu);

    cout << "Chuoi sau khi xoa tu: " << chuoi << endl;

    return 0;
}
