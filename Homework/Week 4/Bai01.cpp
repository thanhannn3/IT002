#include <iostream>
#include "PhanSo.h"

using namespace std;

int main()
{
    PhanSo a, b,c;
    cout << "\n====Nhap phan so thu nhat====\n ";
    cin >> a;
    cout << a;
    cout << endl;
    cout << "====Nhap phan so thu hai====\n ";
    cin >> b;
    cout << b;
    c = a;
    cout << "\nPhan so sau khi duoc gan la: ";
    cout << c;
    cout << "\nTong hai phan so la: \n";
    cout << a + b;
    cout << "\nHieu hai phan so la: \n";
    cout << a - b;
    cout << "\nTich hai phan so la: \n";
    cout << a * b;
    cout << "\nThuong hai phan so la: \n";
    cout << a / b;
    cout << endl;
    if (a == b)
        cout << "\nHai phan so bang nhau ";
    if (a > b)
        cout << "\nPhan so dau lon hon phan so sau ";
    if (a < b)
        cout << "\nPhan so sau lon hon phan so dau ";
    if (a != b)
        cout << "\nHai phan so khac nhau ";
    a++;
    cout << "\na++: " << a;
    ++a;
    cout << "\n++a: " << a;
    b--;
    cout << "\nb--: " << b;
    --b;
    cout << "\nb--: " << b;  
}
