#include "De.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void De::Nhap()
{
	cout << "Nhap vao so luong con da duoc sinh ra ";
	cin >> con;
	srand(time(NULL));
	sua = rand() % (10 - 0 + 1);
}
void De::Xuat()
{
	cout << keu;
}