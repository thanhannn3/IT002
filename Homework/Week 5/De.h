#pragma once
#include "NongTrai.h"
class De :public NongTrai
{
private:
	int con, sua;
	string keu = "be be be be be be be\n";
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

