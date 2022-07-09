#include<bits/stdc++.h>
using namespace std;
class BENHNHAN;
class NGUOI 
{
    protected:
    char Hoten[30];
    float tuoi;
    public: 
    void NHAP();
    void XUAT();
    friend class BENHVIEN;
    friend void BONUS1(BENHNHAN *a, int n);

};
void NGUOI::NHAP()
{
    cout <<"Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout <<"Nhap Tuoi  : "; cin>>tuoi;
}
void NGUOI::XUAT()
{
    cout <<setw(20)<<Hoten <<setw(8)<<tuoi;
}
class BENHVIEN
{
    char TenBV[30], Diachi[50],Giamdoc[20];
    friend class BENHNHAN;
};

class BENHNHAN:public NGUOI
{
    char MaBN[20];
    char Tiensu[50], chuandoan[50];
    BENHVIEN a;
    public:
    void NHAP();
    void XUAT();
    friend void BONUS1(BENHNHAN *a, int n);
    friend void SUA (BENHNHAN *a, int n);
};
void BENHNHAN::NHAP()
{
    cout <<"Nhap ten benh vien : "; fflush(stdin); gets(a.TenBV);
    cout <<"Nhap dia chi benh vien: "; fflush(stdin); gets(a.Diachi);
    cout <<"Nhap Giam doc : "; fflush(stdin); gets(a.Giamdoc);
    cout <<"Nhap thong tin benh nhan: "<<endl;
    NGUOI::NHAP();
    cout <<"Nhap Ma benh nhan : "; fflush(stdin); gets(MaBN);
    cout <<"Nhap Tien su benh : "; fflush(stdin); gets(Tiensu);
    cout <<"Chuan doan benh : "; fflush(stdin); gets(chuandoan);

}
void BENHNHAN::XUAT()
{
    NGUOI::XUAT();
    cout<<left <<setw(10)<<MaBN<<setw(20)<<Tiensu<<setw(20)<<chuandoan
        <<setw(20)<<a.TenBV<<setw(20)<<a.Diachi<<setw(20)<<a.Giamdoc<<endl;
}
//có bao nhiêu bệnh nhân lớn hơn 30 tuổi?
void BONUS1(BENHNHAN *a, int n)
{
    int soluong=0;
    for (int i=0; i<n; i++)
    if(a[i].tuoi>30)
    soluong++;
    cout <<"SO LUONG BENH NHAN LON HON 30 TUOI LA : "<<soluong<<endl;
}

// SỬa thong tin về tuổi của bệnh nhân có mã BN01 thành 20 tuổi
void SUA (BENHNHAN *a, int n)
{
    for (int i=0; i<n; i++)
    if( strcmp(a[i].MaBN, "BN01")==0)
    a[i].tuoi=20;

}
int main ()
{
    BENHNHAN *a;
    int n;
    cout <<"Nhap so benh nhan : "; cin >> n;
    a=new BENHNHAN[n];
    for (int i=0; i<n; i++)
    a[i].NHAP();
    cout <<"\t\tTHONG TIN BENH NHAN :"<<endl;
    for ( int i=0; i<n; i++)
    a[i].XUAT();
    cout <<"BONUS 1: ";
    BONUS1(a,n);
    cout <<"BONUS 2: "<<endl; 
    SUA(a,n);
    for (int i=0; i<n; i++)
    a[i].XUAT();
}