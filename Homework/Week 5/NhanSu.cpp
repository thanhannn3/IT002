#include "NhanSu.h"
#include <iostream>

using namespace std;

void NhanSu::Nhap()
{
	cin.ignore();
	cout << "Ho va ten nhan su: ";
	getline(cin, HoTen);
	cout << "Ngay thang nam sinh nhan su: ";
	getline(cin, NgayThangNamSinh);
	cout << "Ma so nhan su: ";
	getline(cin, MaSoNhanSu);

}
void NhanSu::Xuat()
{
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay thang nam sinh: " << NgayThangNamSinh;
	cout << "\nMa so nhan su: " << MaSoNhanSu;
}
