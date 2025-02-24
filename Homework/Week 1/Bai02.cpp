#include <iostream>
#include "SoPhuc.h"

using namespace std;

int main()
{
    SoPhuc a, b;
    a.Nhap();
    a.Xuat();
    b.Nhap();
    a.Cong(b).Xuat();
    a.Tru(b).Xuat();
    a.Nhan(b).Xuat();
    a.Chia(b).Xuat();
    return 0;
}

