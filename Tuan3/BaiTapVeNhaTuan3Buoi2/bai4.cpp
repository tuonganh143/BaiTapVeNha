#include <iostream>
using namespace std;

// Xen kẻ hoa thường 

void xenKe(char* chuoi) {
    bool trangthai = true;
    int i = 0;
    while (chuoi[i] != '\0') {
        char ch = chuoi[i];
        if (isalpha(ch)) {
            if (trangthai) {
                chuoi[i] = toupper(ch); 
            } else {
                chuoi[i] = tolower(ch); 
            }
            trangthai = !trangthai; 
        }
        i++;
    }
}

int main() {
    const int maxLength = 100;
    char chuoi[maxLength];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(chuoi, maxLength);

    xenKe(chuoi);

    cout << "Chuoi sau khi thay doi: " << chuoi << endl;

    return 0;
}
