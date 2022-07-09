#include<bits/stdc++.h>
using namespace std;
class HANG
{
    private:
    char Mahang[20], Tenhang[20];
    float Dongia;
    public: 
    void NHAP();
    void XUAT();
};
class PHIEU
{
    char Maphieu[20];
    HANG *x;
    int n;
    public: 
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout <<"Nhap Ma hang : "; fflush(stdin); gets(Mahang);
    cout <<"Nhap Ten hang : "; fflush(stdin); gets(Tenhang);
    cout <<"Nhap Don gia : "; cin>>Dongia;
}
void HANG::XUAT()
{
    cout <<left <<setw(20) <<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<endl;
}

void PHIEU::NHAP()
{
    cout <<"Nhap Ma phieu : "; fflush(stdin); gets(Maphieu);
    cout <<"Nhap so hang  : "; cin >>n;
    x=new HANG [n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin mat hang thu "<<i+1<<endl;
        x[i].NHAP();
    }
}
void PHIEU::XUAT()
{
    cout <<"MA PHIEU : "<<Maphieu<<endl;
    cout << left << setw(20) << "MA HANG" <<setw(20)<<"TEN HANG"<<setw(20)<<"DON GIA"<<endl;
    for (int i=0; i<n; i++)
    x[i].XUAT();
}

int main ()
{
    PHIEU k;
    k.NHAP();
    cout <<endl;
    k.XUAT();
    return 0;
}