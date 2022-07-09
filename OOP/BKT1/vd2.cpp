#include <bits/stdc++.h>
using namespace std;
class PHIEUBH;
class KHACH
{
    char MaKH[30];
    char TenKH[30];
    char DiaChi[30];
public:
    void nhap();
    void xuat();
    friend void SUA(PHIEUBH k);
};

void KHACH::nhap()
{
    cout<<"nhap ma khach hang: "; fflush(stdin); gets(MaKH);
    cout<<"Nhap ten khach hang: "; fflush(stdin); gets(TenKH);
    cout<<"Nhap dia chi: "; fflush(stdin); gets(DiaChi);
}

void KHACH::xuat()
{
    cout<<"Ma khach hang: "<<MaKH<<endl;
    cout<<"Ten khach hang: "<<TenKH<<endl;
    cout<<"Dia chi: "<<DiaChi<<endl;
}

class SP
{
    char MaSP[30];
    char TenSP[30];
    char TinhTrang[30];
    float SoTien;
public:
    void nhap();
    void xuat();
    friend void SAP(PHIEUBH k);
    friend void TIEMKIEM(PHIEUBH k);
};

void SP::nhap()
{
    cout<<"Nhap ma san pham: "; fflush(stdin); gets(MaSP);
    cout<<"nhap ten san pham: "; fflush(stdin); gets(TenSP);
    cout<<"Nhap tinh trang san pham: "; fflush(stdin); gets(TinhTrang);
    cout<<"Nhap so tien cua san pham: "; cin>>SoTien;
}
void SP::xuat()
{
    cout<<MaSP<<setw(15)<<TenSP<<setw(15)<<TinhTrang<<setw(15)<<SoTien<<endl;
}

class PHIEUBH
{
    char MaPH[30];
    char NgayBH[30];
    KHACH x;
    SP *y;
    int n;
public:
    void nhap();
    void xuat();
    friend void SAP(PHIEUBH k);
    friend void TIEMKIEM(PHIEUBH k);
    friend void SUA(PHIEUBH k);

};

void PHIEUBH::nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(MaPH);
    cout<<"Nhap Ngay bao hanh: "; fflush(stdin); gets(NgayBH);
    x.nhap();
    cout<<"n: "; cin>>n;
    y = new SP[n];
    for(int i=0;i<n;i++)
        y[i].nhap();

}

void PHIEUBH::xuat()
{
    cout<<"Ma phieu: "<<MaPH<<endl;
    cout<<"Ngay bao hanh: "<<NgayBH<<endl;
    x.xuat();
    cout<<"Ma San Pham"<<setw(15)<<"Ten San Pham"<<setw(15)<<"Tinh Trang"<<setw(15)<<"So Tien"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
}
void SUA(PHIEUBH k)
{
    if(strcmp(k.x.MaKH,"KH005")==0)
       strcpy (k.x.DiaChi , "Ha Noi");
}

void SAP(PHIEUBH k)
{
    for(int i=0; i<k.n; i++)
    for(int j=i+1; j<k.n; j++)
        if (k.y[i].SoTien < k.y[j].SoTien)
        swap(k.y[i] , k.y[j]);
}

void TIEMKIEM(PHIEUBH k)
{
    int dem=0;
    for(int i=0;i<k.n;i++)
        if (k.y[i].SoTien > 0)
        dem++;
    if(dem == 0) cout<<"khong co san pham nao "<<endl;
    else cout<<"so san pham co so tien phai tra lon hon 0 la :"<<dem<<endl;
}

void BONUS1(PHONG a)
{
    for(int i=0; i<a.n; i++)
    {
        if(strcmp(a.x[i].MaTB,"TB001")
                strcpy(a.x[i].tenhang,"Voi Sen");
    }
}
void BONUS2 (PHONG a)
{
    for(int i=0; i<a.n-1; i++)
        for(int j=i+1; j<a.n; j++)
            if(a.y[i].giamua>a.y[j].giamua)
            {
                thietbinoithat tg=a.y[i];
                a.y[i]=a.y[j];
                a.y[j]=tg;
            }
}
void bn3(Phong a)
{
    int dem=0;
    for(int i=0; i<a.n; i++)
        if(strcmp(a.y[i].tinhtrang,"Tot")
            dem++;
    cout<<"co " <<dem<< " mat hang co tinh trang tot"<<endl;
}

int main()
{
    PHIEUBH k;
    k.nhap();
    k.xuat();
    SUA(k);
    SAP(k);
    cout<<setw(30)<<"PHIEU SAU KHI SAP"<<endl;
    k.xuat();
    TIEMKIEM(k);
}