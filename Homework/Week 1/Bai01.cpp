#include "PhanSo.h"
#include <iostream>

int main()
{
    PhanSo a, b;
    a.Nhap();
    a.Xuat();
    a.XuatThapPhan();
    b.Nhap();
    a.Cong(b).Xuat();
    a.Tru(b).Xuat();
    a.Nhan(b).Xuat();
    a.Chia(b).Xuat();
    return 0;
}