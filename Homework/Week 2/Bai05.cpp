#include <iostream>
#include "DaThuc.h"

using namespace std;

int main()
{
    int b;
    DaThuc a,c;
    cout << "\n====Nhap vao da thuc dau tien====\n";
    a.Nhap();
    cout << "Da thuc la: ";
    a.Xuat();
    b=a.TinhGiaTri();
    cout << "Gia tri cua da thuc la: " << b;
    cout << "\n====Nhap vao da thuc thu hai====\n";
    c.Nhap();
    cout << "Tong cua hai da thuc la: ";
    a.CongDaThuc(c).Xuat();
    cout << "\nHieu cua hai da thuc la: ";
    a.TruDaThuc(c).Xuat();

}
