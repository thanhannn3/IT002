#include "ChuyenVien.h"
#include <iostream>

using namespace std;

void ChuyenVien::Nhap()
{
	NhanSu::Nhap();
	cout << "Nhap so luong du an: ";
	cin >> n;
	MaDuAnGiaoDuc = new string[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ma du an giao duc vd (X92): ";
		getline(cin, MaDuAnGiaoDuc[i]);
	}
	cout << "So nam kinh nghiem lam viec: ";
	cin >> SoNamKinhNghiemLamViec;
}

void ChuyenVien::Xuat()
{
	NhanSu::Xuat();
	for (int i = 0; i < n; i++)
	{
		cout << "\nMa du an giao duc: " << MaDuAnGiaoDuc;
	}
	cout << "\nSo nam kinh nghiem lam viec: " << SoNamKinhNghiemLamViec;
}

float ChuyenVien::TinhLuong()
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (MaDuAnGiaoDuc[i][0] == 'T')
		{
			Dem++;
		}
	}
	Luong = (SoNamKinhNghiemLamViec * 4 + Dem) * 18000;
	return Luong;
}
