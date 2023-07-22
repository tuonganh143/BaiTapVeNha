#include <iostream>

using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;
};

Time getTime()
{
    Time t;

    cout << "Nhap gio: ";
    cin >> t.hour;

    cout << "Nhap phut: ";
    cin >> t.minute;

    cout << "Nhap giay: ";
    cin >> t.second;

    return t;
}

Time addTime(Time t1, Time t2)
{
    Time tong;

    tong.hour = t1.hour + t2.hour;
    tong.minute = t1.minute + t2.minute;
    tong.second = t1.second + t2.second;

    if (tong.second >= 60)
    {
        tong.second -= 60;
        tong.minute++;
    }

    if (tong.minute >= 60)
    {
        tong.minute -= 60;
        tong.hour++;
    }

    return tong;
}

Time subtractTime(Time t1, Time t2)
{
    Time diff;

    int totalSeconds1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int totalSeconds2 = t2.hour * 3600 + t2.minute * 60 + t2.second;
    int hieu = totalSeconds1 - totalSeconds2;

    if (hieu < 0)
    {
        hieu = -hieu;
    }

    diff.hour = hieu / 3600;
    hieu %= 3600;
    diff.minute = hieu / 60;
    hieu %= 60;
    diff.second = hieu;

    return diff;
}

void displayTime(Time t)
{
    cout << "Gio: " << t.hour << endl;
    cout << "Phut: " << t.minute << endl;
    cout << "Giay: " << t.second << endl;
}

int main()
{
    Time time1, time2, tong, hieu;

    cout << "Nhap gio thu nhat:" << endl;
    time1 = getTime();

    cout << "Nhap gio thu hai:" << endl;
    time2 = getTime();

    tong = addTime(time1, time2);
    hieu = subtractTime(time1, time2);

    cout << "Tong hai gio:" << endl;
    displayTime(tong);

    cout << "Hieu hai gio:" << endl;
    displayTime(hieu);

    return 0;
}
