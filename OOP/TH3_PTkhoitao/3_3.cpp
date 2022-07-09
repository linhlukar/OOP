#include<bits/stdc++.h>
using namespace std;

class HANG;
class DATE 
{
    int D,M,Y;
    friend class HANG;
    friend void IN (HANG *a, int n);
};

class HANG
{
    char Mahang[20];
    char Tenhang[30];
    DATE Ngaysx;
    public: 
    void NHAP();
    void XUAT();
    friend void IN (HANG *a, int n);

};

void HANG::NHAP()
{
    cout <<"Nhap Ma hang : "; fflush(stdin); gets(Mahang);
    cout <<"Nhap Ten hang: "; fflush(stdin); gets(Tenhang);
    cout <<"Nhap ngay san xuat: "; cin >>Ngaysx.D;
    cout <<"Nhap thang san xuat: "; cin >>Ngaysx.M;
    cout <<"Nhap nam san xuat: "; cin >>Ngaysx.Y;
}
void HANG::XUAT()
{
    cout <<left <<setw(20)<<Mahang<<setw(40)<<Tenhang 
        <<Ngaysx.D<<"/"<<Ngaysx.M<<"/"<<Ngaysx.Y<<endl;
}

void IN (HANG *a, int n)
{
    for (int i=0; i<n; i++)
    if (a[i].Ngaysx.Y == 2017)
    a[i].XUAT();
}

int main ()
{
    HANG *a;
    int n;
    cout <<"Nhap so mat hang : "; cin >>n;
    a=new HANG[n];
    for (int i=0; i<n; i++)
    a[i].NHAP();

    cout <<"Thong tin Hang nhap vao nam 2017 : "<<endl;
    IN (a,n);

    return 0;
}