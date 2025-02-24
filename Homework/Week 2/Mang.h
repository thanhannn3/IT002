#pragma once

class MangMotChieu
{
private:
	int a[100];
	int n;
	int min = 101;
	int maxnt = 2;
public:
	void Nhap();
	void Xuat();
	void Dem();
	void KiemTra();
	void NhoNhat();
	int SoNguyenTo();
	void NguyenToLonNhat();
};
