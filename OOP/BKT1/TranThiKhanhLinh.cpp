#include<bits/stdc++.h>
using namespace std;
class PHONG;
class THIETBI
{
    protected:
    char Matb[20], Tentb[20];
    char Ngaymua[20];
    public:
    void NHAP();
    void XUAT();
    friend void Sua(PHONG a);

};
void THIETBI::NHAP()
{
    cout <<"Nhap ma thiet bi : "; fflush(stdin); gets(Matb);
    cout <<"Nhap ten Thiet bị: "; fflush(stdin); gets(Tentb);
    cout <<"Ngay mua : "; fflush(stdin); gets(Ngaymua);
}
void THIETBI::XUAT()
{
    cout <<left<<setw(18)<<Matb<<setw(18)<<Tentb<<setw(18)<<Ngaymua<<endl;
    cout <<"NGAY MUA : "<<Ngaymua<<endl;
}
class THIETBINT:public THIETBI
{
    char Tinhtrang[20];
    float Giamua;
    char HANGSX[20];
    public:
    void NHAP();
    void XUAT();
    friend void Sap(PHONG a);
    friend void Dem(PHONG a);
};
void THIETBINT::NHAP()
{
    cout <<"Nhap tinh trang : "; fflush(stdin); gets(Tinhtrang);
    cout <<"Nhap Gia mua : "; cin>>Giamua;
    cout <<"Nhap Hang sx : "; fflush(stdin); gets(HANGSX);
}
void THIETBINT::XUAT()
{
    cout <<left<<setw(20)<<Tinhtrang<<setw(15)<<Giamua<<setw(20)<<HANGSX<<endl;
}

class PHONG
{
    char Maph[20];
    char LoaiP[20];
    float dientic;
    THIETBINT *y;
    int n;
    public:
    void NHAP();
    void XUAT();
    friend void Sua(PHONG a);
    friend void Sap(PHONG a);
    friend void Dem(PHONG a);
};
void PHONG::NHAP()
{
    cout <<"Nhap ma phieu : "; fflush(stdin); gets(Maph);
    cout <<"Nhap loai phong: "; fflush(stdin); gets(LoaiP);
    cout <<"Nhap dien tich: "; cin>>dientic;
    cout <<"Nhap so thiet bi: "; cin>>n;
    y=new THIETBINT[n];
    for (int i =0; i<n;i++)
    {
        cout <<"Nhap thong tin thiet bi thu "<<i+1<<endl;
        y[i].NHAP();

    }
}
void PHONG::XUAT()
{
    cout <<" ma phieu : "<<Maph<<endl;
    cout <<"Nhap loai phong: "<<LoaiP<<endl;
    cout <<"Nhap dien tich: "<<dientic<<endl;

    for (int i =0; i<n;i++)
    {
        y[i].XUAT();

    }
}
// sửa lại tên thiết bị có mã "TB001" thành "VOI SEN"
void Sua(PHONG a)
{
    for(int i=0; i<a.n; i++)
    {
        if(strcmp(a.y[i].Matb,"TB001")==0)
                strcpy(a.y[i].Tentb,"Voi Sen");
    }
}
// Sắp xếp thiết bị chiều tăng dần Giá mua
void Sap(PHONG a)
{
    for(int i=0; i<a.n-1; i++)
        for(int j=i+1; j<a.n; j++)
            if(a.y[i].Giamua>a.y[j].Giamua)
            {
                THIETBINT tg=a.y[i];
                a.y[i]=a.y[j];
                a.y[j]=tg;
            }
}
//Có bao nhiêu thiết bị có tình trạng TỐT
void Dem(PHONG a)
{
    int dem=0;
    for(int i=0; i<a.n; i++)
        if(strcmp(a.y[i].Tinhtrang,"Tot")==0)
            dem++;
    cout<<"co " <<dem<< " mat hang co tinh trang tot"<<endl;
}
int main()
{
    PHONG a;
    a.NHAP();
    a.XUAT();
    Sua(a);
    Sap(a);
    Dem(a);
    a.XUAT();

}
