#pragma once
#include "NhanSu.h"

class TroGiang : public NhanSu
{
private:
	int SoMonTroGiang;

public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};
