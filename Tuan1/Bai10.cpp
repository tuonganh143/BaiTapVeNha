#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getNumberOfDays(int month, int year)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

int main()
{
    int month, year;

    // Nhập vào tháng và năm từ người dùng
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    // Kiểm tra tính hợp lệ của tháng và năm
    if (year <= 1975)
    {
        cout << "Nam khong hop le vui long nhap lon hon 1975." << endl;
        return 0;
    }

    if (month < 1 || month > 12)
    {
        cout << "Thang khong hop le vui long nhap tu thang 1 den thang 12." << endl;
        return 0;
    }

    // Lấy số ngày trong tháng
    int numberOfDays = getNumberOfDays(month, year);

    // In ra kết quả
    cout << "Thang " << month << " nam " << year << " co " << numberOfDays << " ngay." << endl;

    return 0;
}