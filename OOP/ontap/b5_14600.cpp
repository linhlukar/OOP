#include<bits/stdc++.h>
using namespace std;
class DONVI
{
    char MaDV[20], TenDV[30], DiaChi[50], TruongDV[30];
    public: 
    void NHAP();
    void XUAT();

};
void DONVI::NHAP()
{
    cout <<"Nhap Ma don vi     : "; fflush(stdin); gets(MaDV);
    cout <<"Nhap Ten don vi    : "; fflush(stdin); gets(TenDV);
    cout <<"Nhap Dia chi don vi: "; fflush(stdin); gets(DiaChi);
    cout <<"Nhap Truong don vi : "; fflush(stdin); gets(TruongDV);
}
void DONVI::XUAT()
{
    cout <<left <<setw(15) <<"Ma don vi         : "<<setw(20)<<MaDV<<setw(15)<<"Ten don vi      : "<<TenDV<<endl;
    cout <<left <<setw(15) <<"Ma Dia chi don vi : "<<setw(20)<<DiaChi<<setw(15)<<"Truong don vi : "<<TruongDV<<endl;

}
class TAISAN
{
    char MaTS[20], TenTS[20], Donvi[10];
    float Giatri;
    public: 
    void NHAP();
    void XUAT();
    friend class BANGTHONGKE;
};
void TAISAN ::NHAP()
{
    cout <<"Nhap Ma tai san  : ";fflush(stdin); gets(MaTS);
    cout <<"Nhap Ten tai san : ";fflush(stdin); gets(TenTS);
    cout <<"Nhap Don vi tinh : ";fflush(stdin); gets(Donvi);
    cout <<"Nhap Gia tri     : ";cin>>Giatri;
}
void TAISAN::XUAT()
{
    cout <<left <<setw(15)<< MaTS<<setw(20)<<TenTS<<setw(15)<<Donvi<<setw(10)<<Giatri<<endl;
}
class BANGTHONGKE
{
    char Ngaylap[20], Nguoilap[30];
    DONVI x;
    TAISAN *y;
    int n;
    public: 
    void NHAP();
    void XUAT();
};
void BANGTHONGKE::NHAP()
{
    cout <<"Nhap ngay lap : "; fflush(stdin); gets(Ngaylap); 
    cout <<"Nhap Nguoi lap: "; fflush(stdin); gets(Nguoilap);
    x.NHAP();
    cout <<"Nhap so tai san : "; cin >>n; 
    y=new TAISAN[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin tai san thu "<<i+1<<endl;
        y[i].NHAP();
    }
}
void BANGTHONGKE::XUAT()
{
    cout <<"TONG CONG TY ABC "<<endl;
    cout <<"\t\t\t\t BANG THONG KE TAI SAN "<<endl;
    cout <<left <<setw(15) <<"Ngay lap          : "<<setw(20)<<Ngaylap<<setw(15)<<"Nguoi lap       : "<<Nguoilap<<endl;
    x.XUAT();
    cout <<"Chi tiet : "<<endl;
    float Tong=0;
    cout <<left <<setw(15)<< "MA TAI SAN "<<setw(20)<<"Ten TAI SAN"<<setw(15)<<"DON VI TINH"<<setw(10)<<"GIA TRI"<<endl;
    for (int i=0; i<n; i++)
    {
        y[i].XUAT();
        Tong += y[i].Giatri;
    }
    cout<<left <<setw(40) <<"TONG SO LUONG THIET BI : "<<Tong<<endl;
    cout <<endl;
    cout <<left<<setw(20)<<"Giam doc "<<setw(20)<<"Phong quan ly "<<setw(20)<<" Nguoi lap" <<endl;
}

int main ()
{
    BANGTHONGKE k;
    k.NHAP();
    k.XUAT();
}