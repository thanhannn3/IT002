#pragma once
#include "NhanSu.h"
class GiangVien : public NhanSu
{
private:
	string HocHam, HocVi;
	float SoNamGiangDay, SoMonGiangDay;

public:
	void Nhap();
	void Xuat();
	float TinhLuong();

};

