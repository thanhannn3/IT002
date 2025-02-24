#include "ToaDo.h"
#include <iostream>

using namespace std;

void ToaDo::Nhap()
{
	cout << "Nhap toa do x: ";
	cin >> x;
	cout << "Nhap toa do y: ";
	cin >> y;
}

void ToaDo::Xuat()
{
	cout << "Diem vua nhap la: (" << x << "," << y << ")\n";
}

float ToaDo::KhoangCachHaiDiem(ToaDo other)
{
	z = sqrt(pow((other.x - x), 2) + pow((other.y - y), 2));
	cout << "khoang cach giua hai diem la: " << z;
	return z;
}