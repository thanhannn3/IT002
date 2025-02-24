#pragma once
#include <iostream>

using namespace std;

class PhanSo
{	
private:
	int* TuSo;
	int* MauSo;
public:
	PhanSo(int tu = 0, int mau = 1)
	{
		TuSo = new int(tu);
		MauSo = new int(mau);
	}
	/*PhanSo(const PhanSo& other);
	~PhanSo();*/

	PhanSo &operator=(const PhanSo &other);
	friend PhanSo operator+(const PhanSo& ps1, const PhanSo& ps2);
	friend PhanSo operator-(PhanSo ps1, PhanSo ps2);
	friend PhanSo operator*(PhanSo ps1, PhanSo ps2);
	friend PhanSo operator/(PhanSo ps1, PhanSo ps2);
	PhanSo& operator+=(const PhanSo& other);
	PhanSo& operator-=(const PhanSo& other);
	PhanSo& operator*=(const PhanSo& other);
	PhanSo& operator/=(const PhanSo& other);
	friend bool operator==(const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator>(const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator<(const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator>=(const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator<=(const PhanSo& ps1, const PhanSo& ps2);
	friend bool operator!=(const PhanSo& ps1, const PhanSo& ps2);
	PhanSo operator++(int other);
	PhanSo &operator++();
	PhanSo operator--(int other);
	PhanSo &operator--();
	friend istream& operator>>(istream& is, PhanSo& ps);
	friend ostream& operator<<(ostream& os, PhanSo ps);
};


