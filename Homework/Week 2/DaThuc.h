#pragma once

class DaThuc
{
private:
	int x, n;
	int* a;
public:
	
	void Nhap();
	void Xuat();
	DaThuc();
	int TinhGiaTri();
	DaThuc CongDaThuc(DaThuc other);
	DaThuc TruDaThuc(DaThuc other);
};