#include<bits/stdc++.h>
using namespace std;

class NSX
{
    char MaNSX[20],TenNSX[30], DC[50];
    friend class HANG;
};

class HANG 
{
    char Mahang[20], Tenhang[30];
    float Dongia;
    float Trongluong;
    NSX x;
    public: 
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout <<"Nhap ma hang :"; fflush(stdin); gets(Mahang);
    cout <<"Nhap ten hang :"; fflush(stdin); gets(Tenhang);
    cout <<"Nhap don gia: "; cin >>Dongia;
    cout <<"Nhap trong luong: "; cin >>Trongluong;
    cout <<"Nhap thong tin NSX "<<endl;
    cout <<"Nhap ma NSX     : "; fflush(stdin); gets(x.MaNSX);
    cout <<"Nhap ten NSX    : "; fflush(stdin); gets(x.TenNSX);
    cout <<"Nhap DC NSX    : "; fflush(stdin); gets(x.DC);

}
void HANG::XUAT()
{
    cout <<"MA HANG :"<<Mahang<<endl;
    cout <<"TEN HANG :"<<Tenhang<<endl;;
    cout <<"DON GIA: "<<Dongia<<endl;
    cout <<"TRONG LUONG: "<<Trongluong<<endl;
    cout <<"Thong tin NSX "<<endl;
    cout <<"MA NSX     : "<<x.MaNSX<<endl;
    cout <<"TEN NSX    : "<<x.TenNSX<<endl;
    cout <<" DC NSX    : "<<x.DC<<endl;
}

int main ()
{
    HANG a;
    a.NHAP();
    cout <<endl;
    cout <<"Thong tin mat hang :"<<endl;
    a.XUAT();

    return 0;

}