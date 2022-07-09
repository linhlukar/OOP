#include<bits/stdc++.h>
using namespace std;

class NSX 
{
    private: 
    char MaNSX[20];
    char TenNSX[20];
    char DCNSX[50];
    public: 
    void NHAP();
    void XUAT();
};

class HANG
{
    char Mahang[20];
    char Tenhang[20];
    NSX x;
    public: 
    void NHAP();
    void XUAT();
};

void NSX::NHAP()
{
    cout <<"Nhap ma NSX      : "; fflush(stdin); gets(MaNSX) ;
    cout <<"Nhap ten NSX     : "; fflush(stdin); gets(TenNSX);
    cout <<"Nhap Dia chi NSX : "; fflush(stdin); gets(DCNSX) ;
}
void NSX::XUAT()
{
    cout <<left <<setw(20) <<MaNSX<<setw(20)<< TenNSX<<setw(20)<<DCNSX<<endl;
}

void HANG::NHAP()
{
    cout <<"Nhap Ma hang : "; fflush (stdin); gets(Mahang);
    cout <<"Nhap Ten hang: "; fflush (stdin); gets(Tenhang);
    x.NHAP();
}
void HANG::XUAT()
{
    cout <<left<<setw(20)<<"MA HANG "<<setw(20)<<"TEN HANG "<<setw(20) 
          <<"MA NSX"<<setw(20)<< "Ten NSX"<<setw(20)<<"DIA CHI NSX"<<endl;
    cout <<left<<setw(20)<<Mahang<<setw(20)<<Tenhang<<setw(20) ;
    x.XUAT();
}

int main ()
{
    HANG a;
    a.NHAP();
    cout <<endl;
    cout <<" THONG TIN MAT HANG "<<endl;
    a.XUAT();
    return 0;
}