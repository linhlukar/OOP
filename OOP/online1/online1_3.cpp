#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class NV
{
    char tenNV[20];
    char chucvu[20];
    public:
    void NHAP();
    void XUAT();
    friend class PHIEU;

};
void NV::NHAP()
{
    cout <<"Nhap ten nhan vien : "; fflush(stdin); gets(tenNV);
    cout <<"Nhap chuc vu       : "; fflush(stdin); gets(chucvu);
}
void NV::XUAT()
{
    cout <<left<<setw(20)<<"Nhan vien kiem ke : "<<setw(25)<<tenNV<<setw(15)<<"Chuc vu : "<<chucvu<<endl;

}

class PHONG
{
    char maPhong[20];
    char tenphong[20];
    char Truongphong[30];
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
void PHONG::NHAP()
{
    cout <<"Nhap ma phong : "; fflush(stdin); gets(maPhong);
    cout <<"Nhap ten phong: "; fflush(stdin); gets(tenphong);
    cout <<"Nhap ten truong phong: "; fflush(stdin); gets(Truongphong);
}
void PHONG::XUAT()
{
    cout <<left<<setw(20)<<"Kiem ke tai phong : "<<setw(25)<<tenphong<<setw(15)<<"Ma phong : "<<maPhong<<endl;
    cout <<left <<setw(20)<<"Truong phong     : "<<Truongphong<<endl;

}

class TAISAN
{
    char tenTS[20], tinhtrang[20];
    int soluong;
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend void SUA (PHIEU k);
    friend void Sap(PHIEU k);

};
void TAISAN::NHAP()
{
    cout <<"Nhap ten tai san : "; fflush(stdin); gets(tenTS);
    cout <<"Nhap so luong    : "; cin>>soluong;
    cout <<"Nhap tinh trang  : "; fflush(stdin); gets(tinhtrang);
}
void TAISAN::XUAT()
{
    cout <<left<<setw(20)<<tenTS<<setw(15)<<soluong<<tinhtrang<<endl;

}

class PHIEU
{
    char Maphieu[20];
    char ngaykiemke[15];
    NV x;
    PHONG y;
    TAISAN *z;
    int n;
    public:
    void NHAP();
    void XUAT();
    friend void SUA (PHIEU k);
    friend void Sap(PHIEU k);
};
void PHIEU::NHAP()
{
    cout <<"Nhap ma phieu: "; fflush(stdin); gets(Maphieu);
    cout <<"Nhap ngay kiem ke: "; fflush(stdin); gets(ngaykiemke);
    x.NHAP();
    y.NHAP();
    cout <<"Nhap so tai san : "; cin>>n;
    z= new TAISAN[n];

    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin tai san thu "<<i+1<<endl;
        z[i].NHAP();
    }

}
void PHIEU::XUAT()
{
    cout <<"\t\t\t PHIEU KIEM KE TAI SAN "<<endl;
    cout <<left<<setw(20)<<"MA PHIEU : "<<setw(25)<<Maphieu<<setw(15)<<"Ngay kiem ke : "<<ngaykiemke<<endl;
    x.XUAT();
    y.XUAT();
    cout <<left<<setw(20)<<"TEN TAI SAN"<<setw(15)<<"SO LUONG"<<"TINH TRANG"<<endl;
    int tong=0;
    for (int i=0; i<n; i++)
    {
        z[i].XUAT();
        tong += z[i].soluong; 
    }
    cout <<left<<"SO TAI SAN KIEM KE : "<<setw(10)<<n<<"Tong so luong : "<<tong<<endl;
}
//bonus 1: sửa số lượng của tài sản "Máy vi tính":
void SUA (PHIEU k)
{
    for (int i=0; i<k.n; i++)
    if(strcmp(k.z[i].tenTS, "MAY VI TINH")==0)
    k.z[i].soluong = 20;
}

//bonus 2: Sắp xếp  theo chiều tăng dần số lượng 
void Sap(PHIEU k)
{
    for (int i=0; i<k.n; i++)
    for (int j=i+1; j<k.n; j++ )
    if (k.z[i].soluong > k.z[j].soluong)
    swap(k.z[i], k.z[j]);
}
int main()
{
    PHIEU k;
    k.NHAP();
    k.XUAT();
    cout <<"BONUS 1 "<<endl;
    SUA(k);
    k.XUAT();
    cout <<"BONUS 2 "<<endl;
    Sap(k); 
    k.XUAT();
}