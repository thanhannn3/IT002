#pragma once
#include "NongTrai.h"
class Bo :public NongTrai
{
private:
	int con, sua;
	string keu = "um bo bo bo bo bo\n";
public:
	void Nhap();
	void Xuat();
	int DeCon()
	{
		return con;
	}
	int LaySua()
	{
		return sua;
	}
	string Getkeu()
	{
		return keu;
	}
};

