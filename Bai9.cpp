#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int gia_km_dau = 15000;
    const int gia_km_2_5 = 13500;
    const int gia_km_tu_6 = 11000;
    const int giam_gia_km_lon = 120;
    const double phan_tram_giam_gia = 0.1;

    int so_km;
    cout << "Nhap vao so km: ";
    cin >> so_km;

    int tong_tien = 0;
    if (so_km <= 0)
    {
        cout << "So km khong hop le!";
    }
    else if (so_km == 1)
    {
        tong_tien = gia_km_dau;
    }
    else if (so_km >= 2 && so_km <= 5)
    {
        tong_tien = gia_km_dau + (so_km - 1) * gia_km_2_5;
    }
    else if (so_km >= 6)
    {
        tong_tien = gia_km_dau + 4 * gia_km_2_5 + (so_km - 5) * gia_km_tu_6;
    }

    if (so_km > giam_gia_km_lon)
    {
        double giam_gia = tong_tien * phan_tram_giam_gia;
        tong_tien -= giam_gia;
    }

    cout << "Tong tien la: " << tong_tien << " VND";

    return 0;
}