#include "NghienCuuVien.h"
#include <iostream>

using namespace std;

void NghienCuuVien::Nhap()
{
	NhanSu::Nhap();
	cout << "Nhap so luong du an: ";
	cin >> n;
	MaDuAnNghienCuu = new string[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ma du an nghien cuu vd (M01): ";
		getline(cin, MaDuAnNghienCuu[i]);
	}
	cout << "So nam kinh nghiem nghien cuu: ";
	cin >> SoNamKinhNghiemNghienCuu;
}

void NghienCuuVien::Xuat()
{
	NhanSu::Xuat();
	for (int i = 0; i < n; i++)
	{
		cout << "\nMa du an nghien cuu: " << MaDuAnNghienCuu;
	}
	cout << "\nSo nam kinh nghiem nghien cuu: " << SoNamKinhNghiemNghienCuu;
}

float NghienCuuVien::TinhLuong()
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (MaDuAnNghienCuu[i][0] == 'D')
		{
			Dem++;
		}
	}
	Luong = (SoNamKinhNghiemNghienCuu * 2 + Dem) * 20000;
	return Luong;
}
