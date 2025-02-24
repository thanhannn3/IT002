#include "Cuu.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Cuu::Nhap()
{
	cout << "Nhap vao so luong con da duoc sinh ra ";
	cin >> con;
	srand(time(NULL));
	sua = rand() % (5 - 0 + 1);
}
void Cuu::Xuat()
{
	cout << keu;
}
