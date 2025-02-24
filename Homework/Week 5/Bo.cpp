#include "Bo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Bo::Nhap()
{
	cout << "Nhap vao so luong con da duoc sinh ra ";
	cin >> con;
	srand(time(NULL));
	sua = rand() % (20 - 0 + 1);
}
void Bo::Xuat()
{
	cout << keu;
}
