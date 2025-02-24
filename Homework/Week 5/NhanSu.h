#pragma once
#include <string>

using namespace std;

class NhanSu
{
protected:
	string HoTen, NgayThangNamSinh, MaSoNhanSu;
	float Luong;
public:
	void Nhap();
	void Xuat();
	NhanSu()
	{
		HoTen = " ";
		NgayThangNamSinh = " ";
		MaSoNhanSu = " ";
	}

	virtual float TinhLuong() = 0;
};

