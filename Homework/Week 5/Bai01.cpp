#include <iostream>
#include "ChuyenVien.h"
#include "GiangVien.h"
#include "NghienCuuVien.h"
#include "NhanSu.h"
#include "TroGiang.h"
#include <vector>

using namespace std;

int main()
{
    int SoLuong,Loai;

    GiangVien x;
    TroGiang y;
    NghienCuuVien z;
    ChuyenVien t;
    cout << "Nhap so luong nhan su: ";
    cin >> SoLuong;
    vector <int>QuanLyNhanSu(SoLuong);
    for (int i = 0; i < QuanLyNhanSu.size(); i++)
    {
        cout << "\n1-(Giang Vien)\n2-(Tro Giang)\n3-(Nghien cuu vien)\n4-(Chuyen Vien)\nChon loai nhan su can nhap vd (4): ";
        cin >> Loai;


        if (Loai == 1)
        {
            x.Nhap();
        }
        if (Loai == 2)
        {
            y.Nhap();
        }
        if (Loai == 3)
        {
            z.Nhap();

        }
        if (Loai == 4)
        {
            t.Nhap();
        }

    }

    float sum = 0;
    sum = sum + (x.TinhLuong() + y.TinhLuong() + z.TinhLuong() + t.TinhLuong());
    cout << "Tong luong: " << sum;
}
