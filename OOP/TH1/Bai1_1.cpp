#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
    private:
    int MaSV;
    char Hoten[20];
    int tuoi;
    double Diem;
    public:
    void NHAP();
    void XUAT();
};
void SINHVIEN::NHAP()
{
    cout <<"Nhap Ma sinh vien    : "; cin >>MaSV;
    cout <<"Nhap ho ten sinh vien: "; fflush(stdin); gets(Hoten);
    cout <<"Nhap tuoi            : "; cin >> tuoi;
    cout <<"Nhap Diem            : "; cin >> Diem;
}
void SINHVIEN::XUAT()
{
    cout <<"Ma sinh vien     : "<<MaSV<<endl;
    cout <<"Ho ten Sinh vien : "<<Hoten<<endl;
    cout <<"Tuoi             : " <<tuoi<<endl;
    cout <<"Diem             : " <<Diem<<endl;
}

int main ()
{
    SINHVIEN a, b;
    a.NHAP();
    b.NHAP();
    cout <<endl;
    a.XUAT();
    b.XUAT();
    return 0;
}