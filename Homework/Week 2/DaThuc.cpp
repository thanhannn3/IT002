#include "DaThuc.h"
#include <iostream>

using namespace std;

DaThuc::DaThuc()
{
	n = 0;
	a = new int[n + 1];
	a[0] = 0;
}

void DaThuc::Nhap()
{
	cout << "\nNhap vao bac da thuc: ";
	cin >> n;

	a = new int[n + 1];
	for (int i = 0; i <= n; i++)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> a[i];
	}
}

void DaThuc::Xuat()
{
	for (int i = n; i >= 1; i--)
	{
		cout << a[i] << "(x^" << i << ") + ";
	}
	cout << a[0];
}
int DaThuc::TinhGiaTri()
{
	cout << "\nNhap x: ";
	cin >> x;
	int s = 0;
	for (int i = n; i >= 0; i--)
	{
		s = s + a[i] * pow(x, i);
	}
	return s;
}

DaThuc DaThuc::CongDaThuc(DaThuc other)
{
	DaThuc kq;
	if (this->n > other.n)
	{
		//kq=this;
		kq.n = this->n;
		kq.a = new int[this->n + 1];
		for (int i = 0; i <= this->n; i++)
		{
			kq.a[i] = this->a[i];
		}
		//kq += other
		for (int i = 0; i <= other.n; i++)
		{
			kq.a[i] = kq.a[i] + other.a[i];
		}
	}
	else
	{
		//kq = other
		kq.n = this->n;
		kq.a = new int[this->n + 1];
		for (int i = 0; i <= other.n; i++)
		{
			kq.a[i] = other.a[i];
		}
		//kq += this
		for (int i = 0; i <= this->n; i++)
		{
			kq.a[i] = kq.a[i] + this->a[i];
		}
	}
	return kq;
}

DaThuc DaThuc::TruDaThuc(DaThuc other)
{
	DaThuc kq;
	if (this->n >= other.n)
	{
		//kq=this;
		kq.n = this->n;
		kq.a = new int[this->n + 1];
		for (int i = 0; i <= this->n; i++)
		{
			kq.a[i] = this->a[i];
		}
		//kq += other
		for (int i = 0; i <= other.n; i++)
		{
			if (other.n >= 0)
			{
				kq.a[i] = kq.a[i] - other.a[i];
			}
			else
			{
				kq.a[i] = kq.a[i] + other.a[i];
			}
			
		}
	}
	//else
	//{
	//	//kq=this;
	//	kq.n = other.n;
	//	kq.a = new int[other.n + 1];
	//	for (int i = 0; i <= other.n; i++)
	//	{
	//		kq.a[i] = other.a[i];
	//	}
	//	//kq += other
	//	for (int i = 0; i <= this->n; i++)
	//	{
	//		if (other.n < 0)
	//		{
	//			kq.a[i] = kq.a[i] + this->a[i];
	//		}
	//		else
	//		{
	//			kq.a[i] = kq.a[i] - this->a[i];
	//		}
	//		kq.a[i] = kq.a[i] - this->a[i];
	//	}
	//}
	return kq;
}

