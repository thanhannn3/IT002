#include "TestCandidate.h"
#include <iostream>

using namespace std;

void TestCandidate::Nhap()
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	ListTestCandidate = new Candidate[n];
	for (int i = 0; i < n; i++)
	{
		ListTestCandidate[i].Nhap();
	}
}

void TestCandidate::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		if (ListTestCandidate[i].KiemTra15() >15)
			ListTestCandidate[i].Xuat();
	}
}

