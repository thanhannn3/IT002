#include "NongTrai.h"
#include <iostream>
#include "De.h"
#include "Cuu.h"
#include "Bo.h"

using namespace std;

void NongTrai::Nhap()
{
	cout << "Nhap tong so luong gia suc o trong nong trai: \n";
	cin >> GiaSuc;
}

void NongTrai::Xuat()
{
	cout << "Tong so luong gia suc o trong nong trai: \n" << GiaSuc;
}