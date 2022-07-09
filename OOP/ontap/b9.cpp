#include <bits/stdc++.h>
using namespace std;
class NHANVIEN;
class NHANSU
{
protected:
    char HoTen[30],GioiTinh[30];
    int ngay,thang,nam;
public:
    void nhap();
    void xuat();
    friend void SUA(NHANVIEN *a,int n);
};
class NHANVIEN : public NHANSU
{
    char PhongBan[30],DiaChi[30];
    float HSL,HSPC,GiamTru;
public:
    void nhap();
    void xuat();
    friend void SUA(NHANVIEN *a,int n);
    friend void SAP(NHANVIEN *a,int n);
    friend void TINHTONG (NHANVIEN *a,int n);
};
void NHANSU::nhap()
{
    cout<<"Nhap ho ten   : "; fflush(stdin); gets(HoTen);
    cout<<"Nhap Gioi tinh: "; fflush(stdin); gets(GioiTinh);
    cout<<"Nhap ngay sinh: "; cin>>ngay;
    cout<<"Nhap Thang sinh: "; cin>>thang;
    cout<<"Nhap nam sinh: "; cin>>nam;
}
void NHANSU::xuat()
{
    cout<<left<<setw(20)<<HoTen<<setw(20)<<GioiTinh<<setw(20)<<ngay,thang,nam;
}
void NHANVIEN ::nhap()
{
    NHANSU::nhap();
    cout<<"Nhap phong ban: "; fflush(stdin); gets(PhongBan);
    cout<<"Nhap DIa chi  : "; fflush(stdin); gets(DiaChi);
    cout<<"Nhap he so luong: "; cin>>HSL;
    cout<<"nhap he so phu cap: "; cin>>HSPC;
    cout<<"nhap giam tru: "; cin>>GiamTru;
}
void NHANVIEN::xuat()
{
    NHANSU::xuat();
    cout<<left<<setw(20)<<PhongBan<<setw(20)<<DiaChi<<setw(20)<<HSL<<setw(20)<<HSPC<<setw(20)<<GiamTru<<endl;

}
void TINHTONG (NHANVIEN *a,int n)
{
    float T=0;
    for (int i=0;i<n;i++)
    {
        T+=830*(a[i].HSL+a[i].HSPC)-a[i].GiamTru;
    }
    cout<<"Tong thu nhap cua phong ban: "<<T<<endl;
}
void SAP(NHANVIEN *a,int n)
{
    for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
        if (a[i].HSL > a[j].HSL)
        swap(a[i] , a[j]);
}
void SUA(NHANVIEN *a,int n)
{
    for (int i=0;i<n;i++)
    {
        if( strcmp(a[i].HoTen, "NV01")==0)
        strcpy(a[i].PhongBan,"Kinh Doanh");
    }
}
int main()
{
    NHANVIEN *a;
    int n;
    cout<<"Nhap so nhan vien: "; cin>>n;
    a=new NHANVIEN [n];
    for(int i=0;i<n;i++)
    {
        a[i].nhap();
    }
    cout<<"Thong tin nhan vien: ";
    cout<<left<<setw(20)<<"HoTen"<<setw(20)<<"GioiTinh"<<setw(20)<<"ngay,thang,nam";
    cout<<left<<setw(20)<<"PhongBan"<<setw(20)<<"DiaChi"<<setw(20)<<"HSL"<<setw(20)<<"HSPC"<<setw(20)<<"GiamTru"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
    cout<<"Hanh Chinh: ";
    TINHTONG(a,n);
    SAP(a,n);
    SUA(a,n);
    cout<<left<<setw(20)<<"HoTen"<<setw(20)<<"GioiTinh"<<setw(20)<<"ngay,thang,nam";
    cout<<left<<setw(20)<<"PhongBan"<<setw(20)<<"DiaChi"<<setw(20)<<"HSL"<<setw(20)<<"HSPC"<<setw(20)<<"GiamTru"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
}