#include "HocSinh.h"
#include <iostream>
#include <string.h>

using namespace std;
bool HocSinh::KiemTraTen(string HoTen)
{
	for (int i = 0; i < HoTen.length(); i++)
	{
		if (!((HoTen[i] >= 'a' && HoTen[i] <= 'z') || (HoTen[i] >= 'A' && HoTen[i] <= 'Z') || (HoTen[i] == ' ')))
		{
			return false;
		}
	}
	return true;
}

bool HocSinh::KiemTraSDT(string SoLienLac)
{
	if (!(SoLienLac.length() >= 9 && SoLienLac.length() <= 11))
	{
		for (int i = 0; i < SoLienLac.length(); i++)
		{
			if (!((SoLienLac[i] >= '0' && SoLienLac[i] <= '9')))
			{
				return false;
			}
		}
		return true;
	}	
}

bool HocSinh::DiemTB()
{
	if (DiemTrungBinh > 0 && DiemTrungBinh < 10)
	{
		return true;
	}
	return false;
}

void HocSinh::Nhap()
{
	do
	{
		cout << "\nNhap ho ten hoc sinh: ";
		getline(cin, HoTen);
		if (!KiemTraTen(HoTen))
		{
			cout << "Nhap sai.Vui long nhap lai ";
		}
	} while (!KiemTraTen(HoTen));
	do
	{
		cout << "Nhap ma so hoc sinh: ";
		cin >> MaSoHocSinh;
		dodai = strlen(MaSoHocSinh);
		if (dodai != 8)
		{
			cout << "Nhap sai.Vui long nhap lai \n";
		}
	} 
	while (dodai !=8);
	cin.ignore();
	do
	{
		
		cout << "Nhap so lien lac hoc sinh: ";
		getline(cin, SoLienLac);
		if (!KiemTraSDT(SoLienLac))
		{
			cout << "Nhap sai.Vui long nhap lai \n";
		}
	} 
	while (!KiemTraSDT(SoLienLac));
	do
	{
		cout << "Nhap diem trung binh hoc sinh: ";
		cin >> DiemTrungBinh;
		if (!DiemTB())
		{
			cout << "Nhap sai.Vui long nhap lai \n";
		}
	}
	while (!DiemTB());
	
}

void HocSinh::Xuat()
{
	cout << "Ho ten hoc sinh la: " << HoTen;
	cout << "\nMa so hoc sinh la: " << MaSoHocSinh;
	cout << "\nSo lien lac hoc sinh la: " << SoLienLac;
	cout << "\nDiem trung binh hoc sinh la: " << DiemTrungBinh;
}