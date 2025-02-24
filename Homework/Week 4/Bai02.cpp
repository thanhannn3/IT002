#include"SoPhuc.h"

int main()
{
	SoPhuc a, b, c;
	cout << "Nhap so phuc a: ";
	cin >> a;
	cout << "So phuc a: " << a << endl;
	cout << "Nhap so phuc b: ";
	cin >> b;
	cout << "So phuc b: " << b << endl;
	c = a;
	cout << "So phuc c: " << c << endl;
	cout << "Tong hai so phuc: " << a + b << endl;
	cout << "Hieu hai so phuc: " << a - b << endl;
	cout << "Tich hai so phuc: " << a * b << endl;
	cout << "thuong hai so phuc: " << a / b << endl;
	cout << "So phuc a: " << a << endl;
	cout << "So phuc b: " << b << endl;
	if (a == b) cout << " So phuc a = So phuc b: Dung";
	else cout << "So phuc a = So phuc b: Sai";
	return 0;

}