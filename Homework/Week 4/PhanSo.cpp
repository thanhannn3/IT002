#include "PhanSo.h"
#include <iostream>

using namespace std;


istream& operator>>(istream& is, PhanSo& ps)
{
	cout << "Nhap tu so: ";
	is >> *ps.TuSo;
	cout << "Nhap mau so: ";
	do
	{
		is >> *ps.MauSo;
		if (*ps.MauSo == 0)
			cout << "Nhap sai, lai mau so:";
	} while (*ps.MauSo == 0);
	return is;
}

ostream& operator<<(ostream& os, PhanSo ps)
{
	if (*ps.TuSo == 0)
	{
		os << 0;
	}
	else if (*ps.TuSo < 0 && *ps.MauSo < 0 || *ps.TuSo > 0 && *ps.MauSo < 0)
	{
		os << * ps.TuSo * -1 << "/" << *ps.MauSo * -1;
	}
	else if (*ps.TuSo > 0 && *ps.MauSo > 0 || *ps.TuSo < 0 && *ps.MauSo > 0)
		os << *ps.TuSo << "/" << *ps.MauSo;
	
	return os;
}

//PhanSo::PhanSo(const PhanSo& other)
//{
//	this->TuSo = new int(*other.TuSo);
//	this->MauSo = new int(*other.MauSo);
//}
//
//PhanSo::~PhanSo()
//	{
//		delete TuSo;
//		delete MauSo;
//	}

PhanSo operator+(const PhanSo &ps1, const PhanSo& ps2)
{
	PhanSo kq;
	*kq.TuSo = (*ps1.TuSo)* (*ps2.MauSo) + (*ps1.MauSo) * (*ps2.TuSo);
	*kq.MauSo = (*ps1.MauSo) * (*ps2.MauSo);
	return kq;
}

PhanSo operator-( PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	*kq.TuSo = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	*kq.MauSo = (*ps1.MauSo) * (*ps2.MauSo);
	return kq;
}

PhanSo operator*( PhanSo ps1,  PhanSo ps2)
{
	PhanSo kq;
	*kq.TuSo = (*ps1.TuSo) * (*ps2.TuSo);
	*kq.MauSo = (*ps1.MauSo) * (*ps2.MauSo);
	return kq;
}

PhanSo operator/( PhanSo ps1,  PhanSo ps2)
{
	PhanSo kq;
	*kq.TuSo = (*ps1.TuSo) * (*ps2.MauSo);
	*kq.MauSo = (*ps1.MauSo) * (*ps2.TuSo);
	return kq;
}

PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	if (this == &ps)
		return *this;
	else
	{
		this->TuSo = ps.TuSo;
		this->MauSo = ps.MauSo;
	}
	return *this;
}

PhanSo& PhanSo::operator+=(const PhanSo& ps)
{
	*this->TuSo = (*this->TuSo)* (*ps.MauSo) + (*this->MauSo) * (*ps.TuSo);
	*this->MauSo = (*this->MauSo) * (*ps.MauSo);
	return *this;
}

PhanSo& PhanSo::operator-=(const PhanSo& ps)
{
	*this->TuSo = (*this->TuSo) * (*ps.MauSo) - (*this->MauSo) * (*ps.TuSo);
	*this->MauSo = (*this->MauSo) * (*ps.MauSo);
	return *this;
}

PhanSo& PhanSo::operator*=(const PhanSo& ps)
{
	*this->TuSo = (*this->TuSo) * (*ps.TuSo);
	*this->MauSo = (*this->MauSo) * (*ps.MauSo);
	return *this;
}

PhanSo& PhanSo::operator/=(const PhanSo& ps)
{
	*this->TuSo = (*this->TuSo) * (*ps.MauSo);
	*this->MauSo = (*this->MauSo) * (*ps.TuSo);
	return *this;
}

bool operator==(const PhanSo &ps1, const PhanSo &ps2)
{
	int kq;
	kq= (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq == 0)
	{
		return true;
	}
	else
		return false;

}

bool operator>(const PhanSo& ps1, const PhanSo& ps2)
{
	int kq;
	kq = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq > 0)
	{
		return true;
	}
	else
		return false;

}

bool operator<(const PhanSo& ps1, const PhanSo& ps2)
{
	int kq;
	kq = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq < 0)
	{
		return true;
	}
	else
		return false;

}

bool operator>=(const PhanSo& ps1, const PhanSo& ps2)
{
	int kq;
	kq = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq >= 0)
	{
		return true;
	}
	else
		return false;

}

bool operator<=(const PhanSo& ps1, const PhanSo& ps2)
{
	int kq;
	kq = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq <= 0)
	{
		return true;
	}
	else
		return false;

}

bool operator!=(const PhanSo& ps1, const PhanSo& ps2)
{
	int kq;
	kq = (*ps1.TuSo) * (*ps2.MauSo) - (*ps1.MauSo) * (*ps2.TuSo);
	if (kq != 0)
	{
		return true;
	}
	else
		return false;

}

PhanSo& PhanSo::operator++()
{
	*this->TuSo = (*this->TuSo) + (*this->MauSo);
	return *this;
}

PhanSo PhanSo::operator++(int x)
{
	PhanSo kq = *this;
	*this->TuSo = (*this->TuSo) + (*this->MauSo);
	return kq;
}

PhanSo& PhanSo::operator--()
{
	*this->TuSo = (*this->TuSo) - (*this->MauSo);
	return *this;
}

PhanSo PhanSo::operator--(int x)
{
	PhanSo kq = *this;
	*this->TuSo = (*this->TuSo) - (*this->MauSo);
	return kq;
}