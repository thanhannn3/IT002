#include "Mang.h"

MangSoNguyen::MangSoNguyen()
{
	DuLieu = new int[1];
	DuLieu[0] = NULL;
	KichThuoc = 1;
}

MangSoNguyen::MangSoNguyen(int n)
{
	DuLieu = new int[n];
	for (int i = 0; i < n; i++)
	{
		this->DuLieu[i] = NULL;
	}
}


MangSoNguyen& MangSoNguyen::operator=(const MangSoNguyen& other)
{
	if (this == &other)
		return *this;
	this->KichThuoc = other.KichThuoc;
	for (int i = 0; i < KichThuoc; i++)
	{
		this->DuLieu[i] = other.DuLieu[i];
	}
	return *this;
}

MangSoNguyen& MangSoNguyen::operator++()
{
	for (int i = 0; i < KichThuoc; i++)
	{
		this->DuLieu[i]++;
	}
	return *this;
}

MangSoNguyen MangSoNguyen::operator++(int)
{
	MangSoNguyen temp;
	temp = *this;
	for (int i = 0; i < KichThuoc; i++)
	{
		this->DuLieu[i]++;
	}
	return temp;
}

MangSoNguyen operator+(const MangSoNguyen Mang1, const MangSoNguyen Mang2)
{
	MangSoNguyen MangX, MangY;
	if (Mang1.KichThuoc > Mang2.KichThuoc || Mang1.KichThuoc == Mang2.KichThuoc)
	{
		MangX = Mang1;
		MangY = Mang2;
	}
	else
	{
		MangX = Mang2;
		MangY = Mang1;
	}
	for (int i = 0; i < MangY.KichThuoc; i++)
	{
		MangX.DuLieu[i] += MangY.DuLieu[i];
	}
	return MangX;
}

ostream& operator<<(ostream& os, MangSoNguyen other)
{
	for (int i = 0; i < other.KichThuoc; i++)
	{
		cout << "a[" << i << "]:";
		cout << other.DuLieu[i] << " ";
	}
	cout << endl;
	return os;
}

istream& operator>>(istream& is, MangSoNguyen& other)
{
	cout << "Kich thuoc mang: ";
	cin >> other.KichThuoc;
	for (int i = 0; i < other.KichThuoc; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> other.DuLieu[i];
	}
	return is;
}

