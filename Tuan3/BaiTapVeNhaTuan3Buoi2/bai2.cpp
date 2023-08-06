#include <iostream>
using namespace std;

// 2 Xuất các kí tự in hoa

void timKyTuInHoa(const char* chuoi) {
    int i = 0;
    while (chuoi[i] != '\0') {
        char ch = chuoi[i];
        if (ch >= 'A' && ch <= 'Z') {
            cout << ch << " ";
        }
        i++;
    }
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    cout << "Cac ky tu in hoa trong chuoi: ";
    timKyTuInHoa(chuoi);
    return 0;
}
