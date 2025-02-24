#include"Mang.h"
int main()
{
	MangSoNguyen a, b,c;
	cout << "Nhap mang a=>";
	cin >> a;
	cout << "Nhap mang b=>";
	cin >> b;
	cout << "Mang a la: \n";
	cout << a;
	cout << "Mang b la: \n";
	cout << b;
	cout << "Mang c la: ";
	c = a;
	cout << c;
	cout << "Mang a+b la: ";
	cout << a + b;
	cout << "Mang b+a la: ";
	cout << b + a;
	cout << "a++:\n";
	cout << a++;
	cout << "++a:\n";
	cout << ++a;
	return 0;
}
