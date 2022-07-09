#include<bits/stdc++.h>
using namespace std;
class TRUONGDH;
class TRUONG
{
    protected:
    char Matruong[20];
    char Tentruong[20];
    char Diachi[50];
    public:
    void NHAP();
    void XUAT();
};
void TRUONG::NHAP()
{
    cout <<"Nhap ma truong  : "; fflush(stdin); gets(Matruong);
    cout <<"Nhap ten truong : "; fflush(stdin); gets(Tentruong);
    cout <<"Nhap dia chi    : "; fflush(stdin); gets(Diachi);
}
void TRUONG::XUAT()
{
    cout <<"MA TRUONG : "<<Matruong<<endl;
    cout <<"TEN TRUONG: "<<Tentruong<<endl;
    cout <<"DIA CHI   : "<<Diachi<<endl;
}
class KHOA 
{
    char Makhoa[20],TenKhoa[20], TruongKhoa[30];
    friend class TRUONGDH;
    friend void XOA(TRUONGDH &k);

};
class BAN
{
    char MaBan[20], Tenban[20],Ngaythanhlap[15];
    friend class TRUONGDH;
};
class TRUONGDH:public TRUONG
{
    KHOA *x;
    int n;
    BAN *y;
    int m ;
    public:
    void NHAP();
    void XUAT();
    friend void XOA(TRUONGDH &k);
};
void TRUONGDH::NHAP()
{
    TRUONG::NHAP();
    cout <<"Nhap so khoa : "; cin>>n;

    x=new KHOA [n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap Ma khoa : "; fflush(stdin); gets(x[i].Makhoa);
        cout <<"Nhap Ten khoa: "; fflush(stdin); gets(x[i].TenKhoa);
        cout <<"Nhap Truong khoa: "; fflush(stdin); gets(x[i].TruongKhoa);
    }
    cout <<"Nhap so BAN : "; cin>>m;    
    y=new BAN[n]; 
    for (int j=0; j<n; j++)
    {
        cout <<"Nhap Ma BAN : "; fflush(stdin); gets(y[j].MaBan);
        cout <<"Nhap Ten ban: "; fflush(stdin); gets(y[j].Tenban);
        cout <<"Nhap Ngay thanh lap: "; fflush(stdin); gets(y[j].Ngaythanhlap);
    }
    
}
void TRUONGDH::XUAT()
{
    TRUONG::XUAT();
    cout <<"THONG TIN KHOA : "<<endl;
    cout <<left<<setw(20)<<"MA KHOA "<<setw(20)<<"TEN KHOA "<<setw(20)<<"TRUONG KHOA "<<endl;
        for (int i=0; i<n; i++)
    {
    cout <<left<<setw(20)<<x[i].Makhoa<<setw(20)<<x[i].TenKhoa<<setw(20)<<x[i].TruongKhoa<<endl;    
    }
    cout <<"THONG TIN BAN : "<<endl; 
    cout <<left<<setw(20)<<"MA BAN"<<setw(20)<<"TEN BAN"<<setw(20)<<"NGAY THANH LAP"<<endl;
    for (int j=0; j<n; j++)
    {
        cout <<left <<setw(20)<<y[j].MaBan<<setw(20)<<y[j].Tenban<<setw(20)<<y[j].Ngaythanhlap<<endl;
    }
}

void XOA(TRUONGDH &k)
{
    for (int i=0; i<k.n; i++)
    if(strcmp(k.x[i].Makhoa,"KH01")==0)
    for (int j=i; j<k.n-1; j++)
    k.x[j]= k.x[j+1];
    k.n--;
    k.x= (KHOA*) realloc(k.x,k.n*sizeof(KHOA));
}


int main()
{
    TRUONGDH a;
    a.NHAP();
    cout <<endl;
    a.XUAT();
    cout <<"BONUS 1: "<<endl;
    XOA(a);
    a.XUAT();
}