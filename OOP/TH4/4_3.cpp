#include<bits/stdc++.h>
using namespace std;

class VEHICLE
{
    protected:
    char Nhanhieu[30];
    int namsx;
    char Hang[50];
    public: 
    void NHAP();
    void XUAT();
};
void VEHICLE ::NHAP()
{
    cout <<"Nhap Nhan hieu : "; fflush(stdin); gets(Nhanhieu);
    cout <<"Nhap nam san xuat : "; cin>>namsx;
    cout <<"Nhap Hang sx      : "; fflush(stdin); gets(Hang);
}
void VEHICLE ::XUAT()
{
    cout <<"NHAN HIEU : "<<Nhanhieu<<endl;
    cout <<"NAM SX    : "<<namsx<<endl;
    cout <<"HANG SX   : "<<Hang<<endl;
}
class OTO:public VEHICLE
{
    int sochongoi;
    float dungtich;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (OTO &a);
};
void OTO::NHAP()
{
    VEHICLE::NHAP();
    cout <<"Nhap so cho ngoi : "; cin >>sochongoi; 
    cout <<"Nhap dung tich   : "; cin>>dungtich;
};
void OTO::XUAT()
{
    VEHICLE :: XUAT();
    cout <<"SO CHO NGOI : "<<sochongoi<<endl;
    cout <<"DUNG TICH   : "<<dungtich <<endl;
}
class MOTO:public VEHICLE
{
    float phankhoi;
    public: 
    void NHAP();
    void XUAT();
};
void MOTO::NHAP()
{
    VEHICLE::NHAP();
    cout <<"Nhap phan khoi : "; cin >>phankhoi; 
};
void MOTO::XUAT()
{
    VEHICLE :: XUAT();
    cout <<"PHAN KHOI : "<<phankhoi<<endl;
}
// Sửa lại Dung tích của xe ô tô vừa nhập thành 3.0
void SUA (OTO &a)
{
    a.dungtich = 3.0;
}
int main()
{
    OTO a;
    MOTO b;
    cout <<"Nhap thong tin oto "<<endl;
    a.NHAP();
    cout <<"Nhap thong tin moto"<<endl;
    b.NHAP();
    cout <<"THONG TIN XE "<<endl;
    cout <<"THONG TIN OTO : "<<endl;
    a.XUAT();
    cout <<"THONG TIN MOTO : "<<endl;
    b.XUAT();
    cout <<"---------"<<endl;
    SUA(a);
    a.XUAT();
}