#include "NongTrai.h"
#include <iostream>
#include "De.h"
#include "Cuu.h"
#include "Bo.h"

using namespace std;

int main()
{
	int n, Loai,GiaSuc;
	cout << "Nhap so luong gia suc dang co o trong nong trai: ";
	cin >> GiaSuc;
    cout << "Nhap so luong gia suc: ";
    cin >> n;
    Bo x;
    De y;
    Cuu z;
    for (int i = 0; i < n; i++)
    {
        cout << "\n1-(Bo)\n2-(De)\n3-(Cuu)\nChon loai gia suc can nhap vd (2): ";
        cin >> Loai;


        if (Loai == 1)
        {
            x.Nhap();
        }
        if (Loai == 2)
        {
            y.Nhap();
        }
        if (Loai == 3)
        {
            z.Nhap();

        }

    }

    cout << "Tieng keu bo la: ";
    x.Xuat();
    cout << "Tieng keu de la: ";
    y.Xuat();
    cout << "Tieng keu cuu la: ";
    z.Xuat();

    int SoSua=0;
    SoSua = x.LaySua() + y.LaySua() + z.LaySua() + SoSua;
    cout << "Tong so sua cua gia suc o trong nong trai la: \n" << SoSua << " lit \n";

    int sum;
    sum = y.DeCon() + z.DeCon() + x.DeCon();

	cout << "Tong so luong gia suc o trong nong trai la: \n" << GiaSuc+sum;
	return 0;
}