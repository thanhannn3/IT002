#include <iostream>
#include "LopHoc.h"
#include<string>
#include <fstream>


using namespace std;

bool LopHoc::KTHocSinh(HocSinh* a)
{
	if (DanhSachHocSinh.size() > 0)
	{
		for (int i = 0; i < DanhSachHocSinh.size(); ++i)
		{
			if (DanhSachHocSinh[i]->LayHoTen() == a->LayHoTen())
			{
				return true;
			}
		}
	}
	return false;
}

void LopHoc::Nhap(int n)
{
	HocSinh* a;
	for(int i = 0; i < n; i++)
	{
		a = new HocSinh;
		a->Nhap();
		if (KTHocSinh(a))
		{
			cout << "Da co hoc sinh trong lop " << endl;
			cin.ignore();
		}
		else
		{
			DanhSachHocSinh.push_back(a);
			cout << "Da nhap thanh cong \n";
			cin.ignore();
		}
	}
}

void LopHoc::XoaHS(int n)
{
	/*HocSinh* z;
	z = new HocSinh;
	cout << "===Nhap ten hoc sinh can xoa=== \n";
	z->NhapTen();
	cout << "So hoc sinh con lai trong danh sach la: \n";
	for (int i = 0; i < n; i++)
	{
		if (KTHocSinh(z))
		{
			DanhSachHocSinh.erase(DanhSachHocSinh.begin() + i);
		}
		else cout << "Khong co hoc sinh trong lop\n";
	}*/
	if (n > DanhSachHocSinh.size() && n < 0)
	{
		cout << "Khong co hoc sinh trong lop\n";
	}
	else
	{
		DanhSachHocSinh.erase(DanhSachHocSinh.begin() + n - 1);
	}
}

void LopHoc::Xuat()
{
	for (int i = 0; i < DanhSachHocSinh.size(); i++)
	{
		DanhSachHocSinh[i]->Xuat();
	}
}

void LopHoc::HSDiemTren8()
{
	for (int i = 0; i < DanhSachHocSinh.size(); i++)
	{
		if (DanhSachHocSinh[i]->LayDiemTrungBinh() > 8)
		{

			DanhSachHocSinh[i]->Xuat();
		}
	}
}

void LopHoc::File()
{
	fstream f;

	f.open("LopHoc.txt", fstream::in);
	if (f.fail() == true)
	{
		cout << "file khong ton tai";
		return;
	}
	int n;
	f >> n;
	cout << "\n\nTong so hoc sinh: " << n << endl;

	for (int i = 0; i < n; i++)
	{

		f.ignore();
		string HOTEN;
		getline(f, HOTEN);
		cout << "\nHo ten cua hoc sinh: " << HOTEN << endl;
		string MSHS;
		getline(f, MSHS);
		cout << "Ma cua hoc sinh: " << MSHS << endl;
		string SDT;
		getline(f, SDT);
		cout << "So dien thoai cua hoc sinh:" << SDT << endl;
		float DTB;
		f >> DTB;
		cout << "Diem trung binh cua hoc sinh:" << DTB << endl;
	}
	f.close();

}