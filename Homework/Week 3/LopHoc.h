#include <iostream>
#include <vector>
#include "HocSinh.h"

using namespace std;

class LopHoc
{
private:
	vector<HocSinh*> DanhSachHocSinh;
	string HoTen;
public:
	void Nhap(int n);
	void Xuat();
	bool KTHocSinh(HocSinh*);
	void XoaHS(int n);
	void HSDiemTren8();
	void File();
};