#include <iostream>
using namespace std;

main()
{
    char lowercaseChar, uppercaseChar;

    cout << "Nhap vao ki tu thuong ";
    cin >> lowercaseChar;

    // uyển đổi ký tự thường thành ký tự hoa
    uppercaseChar = toupper(lowercaseChar);

    cout << "Ky tu hoa la " << uppercaseChar << endl;

    return 0;
}