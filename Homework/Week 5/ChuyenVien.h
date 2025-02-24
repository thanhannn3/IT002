#pragma once
#include "NhanSu.h"


class ChuyenVien : public NhanSu
{
private:
	string *MaDuAnGiaoDuc;
	int SoNamKinhNghiemLamViec,n;

public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

