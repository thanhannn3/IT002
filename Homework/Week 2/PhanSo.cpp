#include "PhanSo.h"
#include <iostream>
#define MAX 50
using namespace std;

PhanSo::PhanSo(int tuso, int mauso)
{
	this->TuSo = tuso;
	this->MauSo = mauso;
}

PhanSo::PhanSo()
{
	TuSo = 0;
	MauSo = 0;
}

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> TuSo;
	cout << "Nhap mau so: ";
	cin >> MauSo;
}

void PhanSo::Xuat()
{
	cout << TuSo << "/" << MauSo;
	cout << endl;
}

void PhanSo::XuatThapPhan()
{
	cout << (float)TuSo / (float)MauSo;
	cout << endl;
}

PhanSo PhanSo::Cong(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo + MauSo * other.TuSo;
	kq.MauSo = MauSo * other.TuSo;
	return kq;
}

PhanSo PhanSo::Tru(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo - MauSo * other.TuSo;
	kq.MauSo = MauSo * other.TuSo;

	return kq;
}

PhanSo PhanSo::Nhan(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.TuSo;
	kq.MauSo = MauSo * other.MauSo;

	return kq;
}
PhanSo PhanSo::Chia(PhanSo other)
{
	PhanSo kq;

	kq.TuSo = TuSo * other.MauSo;
	kq.MauSo = MauSo * other.TuSo;

	return kq;
}

void DSPhanSo::DanhSach()
{
	PhanSo PhanSo[MAX];
	int n;
	cout << "Nhap so luong danh sach phan so: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap phan so thu " << i << " : \n";
		PhanSo[i].Nhap();
		
	}
}