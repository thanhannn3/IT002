#include <iostream>
#include "ToaDo.h"

int main()
{
    ToaDo a, b;
    a.Nhap();
    a.Xuat();
    b.Nhap();
    b.Xuat();
    a.KhoangCachHaiDiem(b);
}