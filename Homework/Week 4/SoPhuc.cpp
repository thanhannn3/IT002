#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	PhanThuc = 0;
	PhanAo = 0;
}

istream& operator>>(istream& is, SoPhuc& other)
{
	cout << "Nhap phan thuc: ";
	is >> other.PhanThuc;
	cout << "Nhap phan ao: ";
	is >> other.PhanAo;
	return is;
}
ostream& operator<<(ostream& os, SoPhuc other)
{
	if (other.PhanThuc == 0 && other.PhanAo == 0) cout << " 0 ";
	if (other.PhanThuc != 0)
	{
		cout << other.PhanThuc;
		if (other.PhanAo != 0)
		{
			if (other.PhanAo > 0)
			{
				cout << " + ";
				if (other.PhanAo != 1) cout << other.PhanAo << " i ";
				if (other.PhanAo == 1) cout << " i ";
			}
			if (other.PhanAo < 0)
			{
				if (other.PhanAo != -1) cout << other.PhanAo << " i ";
				if (other.PhanAo == -1) cout << " -i ";
			}
		}
		
	}
	else
	{
		if (other.PhanAo > 0)
		{
			if (other.PhanAo != 1) cout << other.PhanAo << " i ";
			if (other.PhanAo == 1) cout << " i ";
		}
		if (other.PhanAo < 0)
		{
			if (other.PhanAo != -1) cout << other.PhanAo << " i ";
			if (other.PhanAo == -1) cout << " -i ";
		}
	}

	return os;
}

SoPhuc& SoPhuc::operator=(const SoPhuc& other)
{
	if (this == &other)
		return *this;
	this->PhanThuc = other.PhanThuc;
	this->PhanAo = other.PhanAo;
	return *this;
}

SoPhuc SoPhuc::operator+(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc + other.PhanThuc;
	kq.PhanAo = PhanAo + other.PhanAo;

	return kq;
}

SoPhuc SoPhuc::operator-(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc - other.PhanThuc;
	kq.PhanAo = PhanAo - other.PhanAo;

	return kq;
}
SoPhuc SoPhuc::operator*(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = PhanThuc * other.PhanThuc - PhanAo * other.PhanAo;
	kq.PhanAo = PhanThuc * other.PhanAo + other.PhanThuc * PhanAo;

	return kq;
}

SoPhuc SoPhuc::operator/(SoPhuc other)
{
	SoPhuc kq;

	kq.PhanThuc = (PhanThuc * other.PhanThuc + PhanAo * other.PhanAo) / (other.PhanThuc * other.PhanThuc + other.PhanAo * other.PhanAo);
	kq.PhanAo = (other.PhanThuc * PhanAo - PhanThuc * other.PhanAo) / (other.PhanThuc * other.PhanThuc + other.PhanAo * other.PhanAo);

	return kq;
}

bool operator==(const SoPhuc SP1, const SoPhuc SP2)
{
	if (SP1.PhanThuc != SP2.PhanThuc) return false;
	if (SP1.PhanAo != SP2.PhanAo) return false;
	else return true;
}
bool operator!=(const SoPhuc SP1, const SoPhuc SP2)
{
	if (SP1.PhanThuc == SP2.PhanThuc && SP1.PhanAo == SP2.PhanAo) return false;
	else return true;
}