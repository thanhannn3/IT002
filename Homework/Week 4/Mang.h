#pragma once
#include<iostream>
using namespace std;

class MangSoNguyen
{
	int* DuLieu;
	int KichThuoc;
public:
	MangSoNguyen();
	MangSoNguyen(int);
	MangSoNguyen& operator=(const MangSoNguyen&);
	MangSoNguyen& operator++();
	MangSoNguyen operator++(int);

	int& operator[](int i) { return DuLieu[i]; };

	friend MangSoNguyen operator+(const MangSoNguyen, const MangSoNguyen);
	friend ostream& operator<<(ostream&, MangSoNguyen);
	friend istream& operator>>(istream&, MangSoNguyen&);


};