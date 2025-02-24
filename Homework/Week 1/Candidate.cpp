#include "Candidate.h"
#include <iostream>
#include <string>

using namespace std;

void Candidate::Nhap()
{
	cin.ignore();
	cout << "Nhap ma thi sinh: ";
	getline(cin, Ma);
	cout << "Nhap ho ten thi sinh: ";
	getline(cin, Ten);
	cout << "Nhap ngay sinh thi sinh: ";
	getline(cin, NgaySinh);
	cout << "Nhap diem toan: ";
	cin >> DiemToan;
	cout << "Nhap diem van: ";
	cin >> DiemVan;
	cout << "Nhap diem anh: ";
	cin >> DiemAnh;
}

void Candidate::Xuat()
{
	cout << "Ma: " << Ma << endl;
	cout << "Ho ten: " << Ten << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Diem toan: " << DiemToan << endl;
	cout << "Diem van: " << DiemVan << endl;
	cout << "Diem anh: " << DiemAnh << endl;
	cout << "Diem trung binh: " << float((DiemToan + DiemVan + DiemAnh) / 3) << endl;
}
int Candidate::KiemTra15()
{
	int x = DiemToan + DiemVan + DiemAnh;
	return x;
}