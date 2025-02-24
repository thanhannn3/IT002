#include <iostream>
#include "Mang.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

void MangMotChieu::Nhap()
{
    srand(time(0));
    //cout << "Nhap so luong phan tu: ";
    //cin >> n;
    for (int i = 1; i <= 100; i++)
    {
        a[i] = rand() % 30;
    }
}

void MangMotChieu::Xuat()
{

    for (int i = 1; i <= 100; i++)
    {
        cout << "A[" << i << "] la: " << a[i] << "\t\t\t";
    }
}

void MangMotChieu::Dem()
{
    cout << "Nhap gia tri can kiem tra ";
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (a[i] == n)
        {
            dem++;
        }
    }
    cout << "So lan gia tri " << n <<  " xuat hien la : " <<  dem;
}

void MangMotChieu::KiemTra()
{
    for (int i = 1; i < 100; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << "\nMang tang dan\n";
            break;
        }
        else
        {
            cout << "\nMang khong tang dan\n";
            break;
        }
    }
}

void MangMotChieu::NhoNhat()
{
    for (int i = 1; i < 100; i++)
    {
        if (a[i] % 2 != 0)
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }    
    }
    cout << "Phan le nho nhat la: " << min;
}

int MangMotChieu::SoNguyenTo()
{
    for (int i = 1; i < 100; i++)
    {
        for (int i = 2; i < a[i]; i++)
            if (a[i] % i != 0)
                return 1;
    }
}

void MangMotChieu::NguyenToLonNhat()
{
    for (int i = 2; i < a[i]; i++)
    {
        if (SoNguyenTo() == 1)
        {
            maxnt = a[i];
        }
    }
    for (int i = 2; i < a[i]; i++)
    {
        if ((SoNguyenTo()== 1) && (maxnt < a[i]))
        {
            maxnt = a[i];
        }
    }
    cout << "\nSo nguyen to lon nhat la: " << maxnt;
}