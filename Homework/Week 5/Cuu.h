#pragma once
#include "NongTrai.h"
class Cuu :public NongTrai
{
private:
	int con, sua;
	string keu = "Beeeee Beeeee Beeeee Beeeee Beeeee\n";
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

