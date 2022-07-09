#include<bits/stdc++.h>
using namespace std;

class NSX 
{
    char TenNSX[30], Diachi[30];
    public: 
    void NHAP();
    void XUAT();
    friend class HANG;
};
void NSX::NHAP()
{
    cout <<"Nhap ten NSX : "; fflush(stdin);gets(TenNSX);
    cout <<"Nhap Dia chi : "; fflush(stdin); gets(Diachi);
}
void NSX::XUAT()
{
    cout <<"TEN NSX : "<<TenNSX<<endl;
    cout <<"DIA CHI : "<<Diachi<<endl; 
}

class HANG
{
    protected:
    char Tenhang[20];
    NSX x;
    float Dongia;
    public: 
    void NHAP();
    void XUAT();
    HANG ()
    {
        strcpy(Tenhang, "");
        strcpy(x.TenNSX,"");
        strcpy(x.Diachi,"");
        Dongia=0;
    }

};
void HANG::NHAP()
{
    cout <<"Nhap ten Hang : "; fflush(stdin); gets(Tenhang);
    x.NHAP();
    cout <<"Nhap don gia  : "; cin>>Dongia;
}
void HANG::XUAT()
{
    cout <<"TEN HANG : "<<Tenhang<<endl;
    x.XUAT();
    cout <<"DON GIA  : "<<Dongia<<endl;
}

class DATE
{
    int D,M,Y;
    public: 
    void NHAP();
    void XUAT();
    friend class TIVI;
};
void DATE::NHAP()
{
    cout <<"Ngay : "; cin>>D;
    cout <<"Thang: "; cin>>M;
    cout <<"Nam  : "; cin>>Y;
}
void DATE::XUAT()
{
    cout <<"NGAY NHAP : "<<D<<"/"<<M<<"/"<<Y<<endl;
}
class TIVI : public HANG 
{
    float kichthuoc;
    DATE Ngaynhap;
    public: 
    void NHAP();
    void XUAT();
    TIVI ()
    {
        kichthuoc=0;
        Ngaynhap.D=Ngaynhap.M=Ngaynhap.Y=0;
    }
};
void TIVI::NHAP()
{
    HANG::NHAP();
    cout <<"Nhap kich thuoc tivi : "; cin>>kichthuoc;
    Ngaynhap.NHAP();

}
void TIVI::XUAT()
{
    HANG::XUAT();
    cout <<"KICH THUOC : "<<kichthuoc<<endl;
    Ngaynhap.XUAT();
}
int main()
{
    TIVI a;
    a.NHAP();
    cout <<"\t THONG TIN TIVI :"<<endl;
    a.XUAT();
}