#include <iostream>
#include "NhanVien.h"

using namespace std;

int main()
{
    NhanVien a("An", 30, "30An", "Nhan Vien", 1.0);
    NhanVien b("Anh", 376);
    a.Xuat();
    b.Xuat();
    NhanVien c(a);
    NhanVien d = b;
    c.Xuat();
    d.Xuat();
    NhanVien f;
    f.Nhap();
    f.Xuat();
}
