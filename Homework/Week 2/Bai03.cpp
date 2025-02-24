#include "PhanSo.h"
#include <iostream>

using namespace std;

int main()
{
    PhanSo a;
    PhanSo b;
    a.Nhap();
    cout << "Phan so vua nhap la: ";
    a.Xuat();
    cout << "Phan so khi chuyen sang thap phan la: ";
    a.XuatThapPhan();
    b.Nhap();
    cout << "Tong hai phan so la: ";
    a.Cong(b).Xuat();
    cout << "Hieu hai phan so la: ";
    a.Tru(b).Xuat();
    cout << "Tich hai phan so la: ";
    a.Nhan(b).Xuat();
    cout << "Thuong hai phan so la: ";
    a.Chia(b).Xuat();
    PhanSo x(34, 54);
    cout << "Phan so la: ";
    x.Xuat();
    PhanSo y(x);
    cout << "Phan so duoc sao chep la: ";
    y.Xuat();
    DSPhanSo i;
    i.DanhSach();





    return 0;
}