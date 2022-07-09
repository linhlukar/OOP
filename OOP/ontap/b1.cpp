#include<bits/stdc++.h>
using namespace std;
class PHIEUXUATKHO;
class KHACHHANG;
class KHO
{
    char Makho[20], Diachi[50], Quanly[30];
    public: 
    void NHAP();
    void XUAT();
};
void KHO::NHAP()
{
    cout <<"Nhap ma kho : "; fflush(stdin); gets(Makho);
    cout <<"Nhap Dia chi : "; fflush(stdin); gets(Diachi);
    cout <<"Nhap ten quan ly : "; fflush(stdin); gets(Quanly);

}
void KHO::XUAT()
{
    cout <<left<<setw(20)<<" MA KHO : "<<setw(20)<<Makho<<setw(20)
             <<" DIA CHI KHO : "<<setw(20)<<Diachi<<setw(20)<<"Quan Ly : "<<Quanly<<endl;
}
class KHACHHANG
{
    char MaKH[20], Diachi[50];
    int SDT;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (PHIEUXUATKHO k);
};
void KHACHHANG::NHAP()
{
    cout <<"Nhap ma Khach hang : "; fflush(stdin); gets(MaKH);
    cout <<"Nhap Dia chi : "; fflush(stdin); gets(Diachi);
    cout <<"Nhap SDT : "; cin>>SDT;
}
void KHACHHANG::XUAT()
{
    cout <<left<<setw(20)<<" MA KHACH : "<<setw(20)<<MaKH<<setw(20)
                         <<"DIA CHI : "<<setw(20)<<Diachi<<setw(15)
                         <<"SDT     : "<<SDT<<endl;
}
class THIETBI
{
    char MaTB[20], TenTB[50];
    int Soluong;
    float Dongia;
    public: 
    void NHAP();
    void XUAT();
    friend void SAP(PHIEUXUATKHO k);
    friend class PHIEUXUATKHO;

};
void THIETBI::NHAP()
{
    cout <<"Nhap Ma Thiet bi : "; fflush(stdin); gets(MaTB);
    cout <<"Nhap ten thiet bi: "; fflush(stdin); gets(TenTB);
    cout <<"Nhap so luong : "; cin >>Soluong; 
    cout <<"Nhap Don gia: "; cin>>Dongia; 
}
void THIETBI::XUAT()
{
    cout <<left<<setw(20)<<MaTB<<setw(20)<<TenTB<<setw(10)<<Soluong
    <<setw(10)<<Dongia<<setw(20)<<Dongia*Soluong<<endl;
}
class PHIEUXUATKHO 
{
    char Maphieu[20],Ngaylap[20];
    KHO x; 
    KHACHHANG y; 
    THIETBI *z; 
    int n; 
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (PHIEUXUATKHO k);
    friend void SAP(PHIEUXUATKHO k);


};
void PHIEUXUATKHO::NHAP()
{
    cout <<"Nhap Ma phieu : "; fflush(stdin); gets(Maphieu); 
    cout <<"Nhap Ngay lap : "; fflush(stdin); gets(Ngaylap); 
    x.NHAP();
    y.NHAP();
    cout <<"Nhap so luong thiet bi : "; cin >>n; 
    z=new THIETBI [n];
    for (int i =0; i<n; i ++ )
    {
        cout <<"Nhap thong tin thiet bi thu "<<i+1<<endl;
        z[i].NHAP();
    }
}
void PHIEUXUATKHO ::XUAT()
{
    cout <<"DIEN MAY ABC "<<endl;
    cout <<"\t\t\t PHIEU XUAT KHO "<<endl;
    cout <<left<<setw(20)<<" MA PHIEU : "<<setw(20)<<Maphieu<<setw(20)<<"NGAY LAP : "<<Ngaylap<<endl;
    x.XUAT();
    y.XUAT();
    float sumTS=0;
    cout <<left<<setw(20)<<"MA TB"<<setw(20)<<"TEN THIET BI"<<setw(10)<<"sO LUONG"
                <<setw(10)<<"DON GIA "<<setw(10)<<"THANH TIEN"<<endl;
    for (int i=0; i<n; i++)
    {
    z[i].XUAT();
    sumTS +=  z[i].Dongia * z[i].Soluong;       
    }
    cout <<left<<setw(40)<<"\t\t TONG SO : "<<sumTS<<endl;
    cout <<"\t\t\t\t Ha Noi, Ngay ... thang ... nam 2021"<<endl;
}

void SUA (PHIEUXUATKHO k)
{
    strcpy(k.y.Diachi, "DA LAT");
}
// sắp xếp giảm dần theo đơn giá 
void SAP(PHIEUXUATKHO k)
{
    for (int i=0; i<k.n; i++)
        for (int j=i+1; j<k.n; j++)
            if (k.z[i].Dongia < k.z[j].Dongia)
                swap(k.z[i], k.z[j]);
}

int main ()
{
    PHIEUXUATKHO a;
    a.NHAP();
    a.XUAT();
    SUA(a);
    SAP(a);
    a.XUAT();
}