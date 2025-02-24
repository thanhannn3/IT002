#pragma once
#include <string>

using namespace std;

class HocSinh
{
private:
	string HoTen, SoLienLac;
	string MaSoHocSinh;
	int dodai;
	float DiemTrungBinh;
public:
	void Nhap();
	void Xuat();
	bool KiemTraTen(string);
	bool KiemTraSDT(string);
	bool DiemTB();
	string LayHoTen()
	{
		return HoTen;
	}
	float LayDiemTrungBinh()
	{
		return DiemTrungBinh;
	}
	void setHoten(string HOTEN)
	{
		HoTen = HOTEN;

	}
	string setMaSoHocSinh(string MSHS)
	{
		MaSoHocSinh = MSHS;
	}
	void setSoLienLac(string SDT)
	{
		SoLienLac = SDT;
	}
	void setDiemTrungBinh(float DTB)
	{
		DiemTrungBinh = DTB;
	}
	void NhapTen();
};