#pragma once
#include <string>

using namespace std;

class HocSinh
{
private:
	string HoTen,SoLienLac;
	char MaSoHocSinh[8];
	int dodai;
	float DiemTrungBinh;
public:
	void Nhap();
	void Xuat();
	bool KiemTraTen(string);
	bool KiemTraSDT(string);
	bool DiemTB();
};