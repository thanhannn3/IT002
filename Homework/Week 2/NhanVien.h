#pragma once
#include <string>

using namespace std;
class NhanVien
{
private:
	string sHoTen, sMaSoNhanVien, sChucDanh;
	int iSoNgayLamViec;
	float fHeSoLuong;
public:
	NhanVien(string HoTen, int SoNgayLamViec, string MaSoNhanVien, string ChucDanh, float HeSoLuong);
	NhanVien(string HoTen1, int SoNgayLamViec1);
	void Nhap();
	void Xuat();

	string GetHoTen();
	int GetSoNgayLamViec();

	void SetHoTen(string sHoTen);
	int SetSoNgayLamViec(int iSoNgayLamViec);
	NhanVien(const NhanVien& other);
	NhanVien();
	~NhanVien() {};
};
