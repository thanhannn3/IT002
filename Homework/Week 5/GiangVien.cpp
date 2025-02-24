#include "GiangVien.h"
#include <iostream>

using namespace std;

void GiangVien::Nhap()
{
	NhanSu::Nhap();
	cout << "Hoc ham: ";
	getline(cin, HocHam);
	cout << "Hoc vi: ";
	getline(cin, HocVi);
	cout << "So nam giang day: ";
	cin >> SoNamGiangDay;
	cout << "So mon giang day: ";
	cin >> SoMonGiangDay;
}

void GiangVien::Xuat()
{
	NhanSu::Xuat();
	cout << "\nHoc ham: " << HocHam;
	cout << "\nHoc vi: " << HocVi;
	cout << "\nSo nam giang day: " << SoNamGiangDay;
	cout << "\nSo mon giang day: " << SoMonGiangDay;
}

float GiangVien::TinhLuong()
{
	return (SoMonGiangDay * SoNamGiangDay * 0.12) * 20000;
}



