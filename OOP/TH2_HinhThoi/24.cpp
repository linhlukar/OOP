#include<bits/stdc++.h>
using namespace std;
class PHONGMAY;
class MAY
{
    private:
    char Mamay[20];
    char KieuMay[20];
    char Tinhtrang[20];
    public:
    void NHAP();
    void XUAT();
    friend void SUATinhTrang (PHONGMAY k);
};

class QUANLY
{
    private:
    char MaQL[20]; 
    char Ten[20];
    public:
    void NHAP();
    void XUAT();
};

class PHONGMAY
{
    private:
    char Maphong[20];
    char TenPHONG[20];
    float Dientich;
    QUANLY x;
    MAY *y;
    int n;
    public:
    void NHAP();
    void XUAT();
    friend void SUATinhTrang (PHONGMAY k);
    friend void SUADT(PHONGMAY &k);
};

void MAY::NHAP()
{
    cout <<"Nhap Ma may         : "; fflush(stdin); gets(Mamay);
    cout <<"Nhap Kieu may       : "; fflush(stdin); gets(KieuMay);
    cout <<"Nhap Tinh trang may : "; fflush(stdin); gets(Tinhtrang);

}
void MAY::XUAT()
{
    cout <<left << setw(20)<<Mamay <<setw(20) <<KieuMay <<setw(20)<<Tinhtrang <<endl;
}

void QUANLY::NHAP()
{
    cout <<"Nhap Ma quan ly    : "; fflush(stdin); gets(MaQL);
    cout <<"Nhap Ho ten quan ly: "; fflush(stdin); gets(Ten);
}
void QUANLY ::XUAT()
{
    cout <<"MA QUAN LY : "<<MaQL<<endl;
    cout <<"HO TEN     : "<<Ten <<endl;
}
void PHONGMAY ::NHAP()
{
    cout <<"Nhap MA phong        : "; fflush(stdin); gets(Maphong);
    cout <<"Nhap TEN phong       : "; fflush(stdin); gets(TenPHONG);
    cout <<"Nhap DIEN TICH phong : "; cin>>Dientich;
    x.NHAP();
    cout <<"Nhap so may : "; cin >>n;
    y=new MAY[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin may thu "<<i+1<<endl;
        y[i].NHAP();
    }
}
void PHONGMAY::XUAT()
{
    cout <<"MA PHONG : "<<Maphong<<endl;
    cout <<"TEN PHONG: "<<TenPHONG<<endl;
    cout <<"Dien tich: "<<Dientich<<endl;
    x.XUAT();
    cout <<left << setw(20)<<"MA MAY" <<setw(20) <<"KIEU MAY" <<setw(20)<<"TINH TRANG" <<endl;
    for (int i=0; i<n; i++)
        y[i].XUAT();
}

//Bonus 1: Sửa lại Tình trạng của máy tính MS001 thành “Tot”.

void SUATinhTrang (PHONGMAY k)
{
    for (int i=0; i<k.n; i++)
    if (strcmp (k.y[i].Mamay, "MS001") ==0 )
    strcpy(k.y[i].Tinhtrang, "TOT");
}

//Bonus 2: Sửa lại diện tíchcủa phòng máy thành 50.
void SUADT (PHONGMAY &k)
{
    k.Dientich = 50;
}
int main ()
{
    PHONGMAY a;
    a.NHAP();
    cout <<endl;
    a.XUAT();
cout <<endl;
    cout <<"Bonus 1: "<<endl;
    SUATinhTrang (a);
    a.XUAT();
cout <<endl;
    cout <<"Bonus 2: "<<endl;
    SUADT (a);
    a.XUAT();
    return 0;
}