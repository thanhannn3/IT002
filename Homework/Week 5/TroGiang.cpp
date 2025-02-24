#include "TroGIang.h"
#include <iostream>

using namespace std;

void TroGiang::Nhap()
{
	NhanSu::Nhap();
	cout << "So mon tro giang: ";
	cin >> SoMonTroGiang;
}

void TroGiang::Xuat()
{
	NhanSu::Xuat();
	cout << "\nSo mon tro giang: " << SoMonTroGiang;
}

float TroGiang::TinhLuong()
{
	Luong = (SoMonTroGiang * 0.3) * 18000;
	return Luong;
}