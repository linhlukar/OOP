#include<bits/stdc++.h>
using namespace std;
class CONGTY;
class NGUOI
{
    protected:
    char Hoten[20];
    int tuoi;
    char Gioitinh[10];
    public: 
    void NHAP();
    void XUAT();

};
void NGUOI::NHAP()
{
    cout <<"Nhap HO TEN : "; fflush(stdin); gets(Hoten);
    cout <<"Nhap TUOI   : "; cin>>tuoi; 
    cout <<"Nhap GIOI TINH: "; fflush(stdin); gets(Gioitinh);
}
void NGUOI::XUAT()
{
    cout <<left<<setw(20)<<Hoten<<setw(8)<<tuoi<<setw(10)<<Gioitinh;
}
class NHANVIEN:public NGUOI
{
    char MaNV[10], chucvu[20];
    float luong;
    public: 
    void NHAP();
    void XUAT();
    friend class CONGTY;
    friend void SUA(CONGTY k);
    friend void SAP(CONGTY k);
};
void NHANVIEN::NHAP()
{
    NGUOI::NHAP();
    cout <<"Nhap MA NV : "; fflush(stdin); gets(MaNV);
    cout <<"Nhap CHUC VU: "; fflush(stdin); gets(chucvu);
    cout <<"Nhap LUONG  : "; cin>>luong;
}
void NHANVIEN::XUAT()
{
    NGUOI::XUAT();
    cout <<left<<setw(10)<<MaNV<<setw(20)<<chucvu<<setw(10)<<luong<<endl;
}
class CONGTY
{
    char MaCT[10];
    char diachi[30];
    NHANVIEN *x;
    int n;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA(CONGTY k);
    friend void SAP(CONGTY k);
};
void CONGTY ::NHAP()
{
    cout <<"Nhap MA CONG TY : "; fflush(stdin); gets(MaCT); 
    cout <<"Nhap DIA CHI    : "; fflush(stdin); gets(diachi);
    cout <<"Nhap so nhan vien: "; cin>>n; 
    x=new NHANVIEN[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Thong tin nhan vien "<<i+1<<":"<<endl;
        x[i].NHAP();
    }

}
void CONGTY::XUAT()
{
    cout <<"MA CONG TY : "<<MaCT<<endl;
    cout <<"DIA CHI    : "<<diachi<<endl;
    cout <<left<<setw(20)<<"HO TEN"<<setw(8)<<"TUOI"<<setw(10)<<"GIOI TINH" <<setw(10)<<"MA NV"<<setw(20)<<"CHUC VU"<<setw(10)<<"LUONG"<<endl;
    for (int i=0; i<n ; i++)
    x[i].XUAT();

}
//Sửa lương của các nhân viên có tuổi lớn hơn 40 và chức vụ “ke toan” thành 1000, rồi in ra màn hình
void SUA(CONGTY k)
{
    for (int i=0; i<k.n; i++)
    if(k.x[i].tuoi >40 && strcmp(k.x[i].chucvu,"KE TOAN")==0)
    k.x[i].luong=1000;
}
void SAP(CONGTY k)
{
    for (int i=0; i<k.n; i++)
    for (int j=i+1; j<k.n; j++)
    if(k.x[i].luong > k.x[i].luong)        
    swap(k.x[i],k.x[j]);    
}
int main()
{
    CONGTY k;
    k.NHAP();
    k.XUAT();
    //k.XUAT();
    //SUA (k);
cout <<"Sap : "<<endl<<endl;
    SAP(k);
    k.XUAT();
}