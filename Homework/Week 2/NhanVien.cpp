#include "NhanVien.h"
#include <iostream>

using namespace std;

NhanVien::NhanVien(string HoTen, int SoNgayLamViec, string MaSoNhanVien, string ChucDanh, float HeSoLuong)
{
	this->sHoTen = HoTen;
	this->iSoNgayLamViec = SoNgayLamViec;
	this->sMaSoNhanVien = MaSoNhanVien;
	this->sChucDanh = ChucDanh;
	this->fHeSoLuong = HeSoLuong;
}

NhanVien::NhanVien(string HoTen1, int SoNgayLamViec1)
{
	this->sHoTen = HoTen1;
	this->iSoNgayLamViec = SoNgayLamViec1;
	this->sMaSoNhanVien = to_string(SoNgayLamViec1) + HoTen1;
	if (SoNgayLamViec1 > 0 && SoNgayLamViec1 < 365)
	{
		this->sChucDanh = "Nhan Vien";
		this->fHeSoLuong = 1.0;
	}
	else
	{
		if (SoNgayLamViec1 > 365 && SoNgayLamViec1 < 730)
		{
			this->sChucDanh = "Quan Ly";
			this->fHeSoLuong = 1.5;
		}
		else
		{
			if (SoNgayLamViec1 > 730 && SoNgayLamViec1 < 1460)
			{
				this->sChucDanh = "Truong Phong";
				this->fHeSoLuong = 2.25;
			}
			else
			{
				this->sChucDanh = "Truong Ban Quan Ly";
				this->fHeSoLuong = 4.0;
			}
		}
	}

}

string NhanVien::GetHoTen()
{
	return sHoTen;
}

int NhanVien::GetSoNgayLamViec()
{
	return iSoNgayLamViec;
}


void NhanVien::SetHoTen(string HoTen)
{
	sHoTen = HoTen;
}

int NhanVien::SetSoNgayLamViec(int SoNgayLamViec)
{
	return iSoNgayLamViec = SoNgayLamViec;
}

void NhanVien::Xuat()
{
	cout << "Ho va ten nhan vien: " << sHoTen << endl;
	cout << "So ngay lam viec cua nhan vien: " << iSoNgayLamViec << endl;
	cout << "Ma so nhan vien: " << sMaSoNhanVien << endl;
	cout << "Chuc danh cua nhan vien: " << sChucDanh << endl;
	cout << "He so luong cua nhan vien: " << fHeSoLuong << endl;
}

NhanVien::NhanVien(const NhanVien& other)
{
	sHoTen = " ";
	sMaSoNhanVien = " ";
	sChucDanh = other.sChucDanh;
	fHeSoLuong = other.fHeSoLuong;
	iSoNgayLamViec = other.iSoNgayLamViec;

}

NhanVien::NhanVien()
{
	sHoTen = " ";
	sMaSoNhanVien = " ";
	sChucDanh = " ";
	fHeSoLuong = 0;
	iSoNgayLamViec = 0;

}

void NhanVien::Nhap()
{
	cout << "Nhap ho va ten nhan vien: ";
	cin >> sHoTen;
	cout << "So ngay lam viec cua nhan vien: ";
	cin >> iSoNgayLamViec;
	sMaSoNhanVien = to_string(iSoNgayLamViec) + sHoTen;
	if (iSoNgayLamViec > 0 && iSoNgayLamViec < 365)
	{
		this->sChucDanh = "Nhan Vien";
		this->fHeSoLuong = 1.0;
	}
	else
	{
		if (iSoNgayLamViec > 365 && iSoNgayLamViec < 730)
		{
			this->sChucDanh = "Quan Ly";
			this->fHeSoLuong = 1.5;
		}
		else
		{
			if (iSoNgayLamViec > 730 && iSoNgayLamViec < 1460)
			{
				this->sChucDanh = "Truong Phong";
				this->fHeSoLuong = 2.25;
			}
			else
			{
				this->sChucDanh = "Truong Ban Quan Ly";
				this->fHeSoLuong = 4.0;
			}
		}
	}
}
