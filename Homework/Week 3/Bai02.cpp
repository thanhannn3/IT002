#include <iostream>
#include"LopHoc.h"
#include "HocSinh.h"

int main()
{
    LopHoc a,b;
    a.Nhap(3);
    a.Xuat();
    cout << "sau khi xoa mot thanh vien o vi tri thu 2: ";
    a.XoaHS(2);
    a.Xuat();
    cout << "\nDanh sach hoc sinh diem trung binh tren 8:\n";
    a.HSDiemTren8();
    cout << "   \n===== NHAP TU FILE=======\n";
    b.File();
}
