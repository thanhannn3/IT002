#include "SoPhuc.h"
#include <iostream>

using namespace std;

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> PhanThuc;
	cout << "Nhap phan ao: ";
	cin >> PhanAo;
}

void SoPhuc::Xuat()
{
	cout << "(" << PhanThuc << ")+(" << PhanAo << ")i";
	cout << endl;
}

SoPhuc SoPhuc::Cong(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc + other.PhanThuc;
	kq.PhanAo = PhanAo + other.PhanAo;

	return kq;
}

SoPhuc SoPhuc::Tru(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc - other.PhanThuc;
	kq.PhanAo = PhanAo - other.PhanAo;

	return kq;
}

SoPhuc SoPhuc::Nhan(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc * other.PhanThuc - PhanAo * other.PhanAo;
	kq.PhanAo = PhanThuc * other.PhanAo + other.PhanThuc * PhanAo;

	return kq;
}
SoPhuc SoPhuc::Chia(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = (PhanThuc * other.PhanThuc + PhanAo * other.PhanAo) / (other.PhanThuc * other.PhanThuc + other.PhanAo * other.PhanAo);
	kq.PhanAo = (other.PhanThuc * PhanAo - PhanThuc * other.PhanAo) / (other.PhanThuc * other.PhanThuc + other.PhanAo * other.PhanAo);

	return kq;
}