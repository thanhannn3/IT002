#pragma once
#include "NhanSu.h"


class NghienCuuVien : public NhanSu
{
private:
	int SoNamKinhNghiemNghienCuu, n;
	string *MaDuAnNghienCuu;

public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

