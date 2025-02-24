#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
	float PhanThuc, PhanAo;
public:
	SoPhuc();
	~SoPhuc() {};
	SoPhuc& operator=(const SoPhuc&);
	SoPhuc operator+(SoPhuc other);
	SoPhuc operator-(SoPhuc other);
	SoPhuc operator*(SoPhuc other);
	SoPhuc operator/(SoPhuc other);
	friend istream& operator>>(istream&, SoPhuc&);
	friend ostream& operator<<(ostream&, SoPhuc);
	friend bool operator==(const SoPhuc SP1, const SoPhuc SP2);
	friend bool operator!=(const SoPhuc SP1, const SoPhuc SP2);
};
