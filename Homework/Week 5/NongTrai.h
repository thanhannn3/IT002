#pragma once
#include <string>;

using namespace std;

class NongTrai
{
private:
	int GiaSuc;
public:
	void Nhap();
	void Xuat();
	virtual int DeCon() = 0;
	virtual int LaySua() = 0;
};

