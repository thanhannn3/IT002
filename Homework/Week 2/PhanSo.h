#pragma once

class PhanSo
{
private:
	int TuSo;
	int MauSo;
public:
	PhanSo(int tuso, int mauso);
	void Nhap();
	void Xuat();
	void XuatThapPhan();
	PhanSo Cong(PhanSo other);
	PhanSo Tru(PhanSo other);
	PhanSo Nhan(PhanSo other);
	PhanSo Chia(PhanSo other);
	PhanSo();
	~PhanSo() {};
};
class DSPhanSo
{
private:
	int n;
public:
	void DanhSach();
	friend class PhanSo;
};