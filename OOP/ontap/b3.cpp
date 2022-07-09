#include <bits/stdc++.h>
using namespace std;
class GIANHANG;
class HANG
{
    protected:
    char MaPT[20], Loai[10];
    int namSX;
    char HangSX[30];
    public: 
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout <<"Nhap Ma PT : "; fflush(stdin); gets(MaPT);
    cout <<"Nhap loai : "; fflush(stdin); gets(Loai);
    cout <<"Nhap Nam san xuat : "; cin >>namSX; 
    cout <<"Nhap hang san xuat : "; fflush(stdin); gets(HangSX);
}
void HANG::XUAT()
{
    cout <<left<<setw(20)<<"MA PT : "<<MaPT<<setw(10)<<Loai<<setw(10)<<namSX<<setw(10)<<HangSX;
}
class HOP : public HANG
{
    char KieuDang[30], ChatLieu[30];
    float TheTich;
    char GhiChu[50];
    public: 
    void NHAP();
    void XUAT();
    friend void SX (GIANHANG k);
};
void HOP ::NHAP()
{
    HANG::NHAP();
    cout <<"Nhap kieu dang : "; fflush(stdin); gets(KieuDang); 
    cout <<"Nhap Chat lieu : "; fflush(stdin); gets(ChatLieu); 
    cout <<"Nhap The tich  : "; cin>>TheTich; 
    cout <<"Them Ghi Chu   : "; fflush(stdin); gets(GhiChu); 
}
void HOP ::XUAT()
{
    HANG::XUAT();
    cout <<setw(20)<<KieuDang<<setw(20)<<ChatLieu<<setw(10)<<TheTich<<setw(20)<<GhiChu<<endl;
}
class GIANHANG
{
    char MaGH[30], TenGH[30];
    float SoLo;
    HOP *x;
    int n; 
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (GIANHANG &k);
    friend void SX (GIANHANG k);
};
void GIANHANG::NHAP()
{
    cout <<"Nhap Ma Gian hang : "; fflush(stdin ); gets(MaGH); 
    cout <<"Nhap Ten gian hang: "; fflush(stdin); gets(TenGH);
    cout <<"Nhap so lo : "; cin >>SoLo; 
    cout <<"Nhap so luong Hop : "; cin >>n; 
    x= new HOP [n];
    for (int i =0 ; i <n; i++)
    {
        cout <<"Nhap thong tin hop thu "<<i+1<<endl;
        x[i].NHAP();
    }
}
void GIANHANG::XUAT()
{
    cout <<"MA GIAN HANG : "<<MaGH<<endl;
    cout <<"TEN GIAN HANG: "<<TenGH<<endl;
    cout <<"SO LO        : "<<SoLo<<endl;
    cout <<"Thong tin : "<<endl;
    for (int i =0; i <n; i++)
    x[i].XUAT();
}
//Sửa lại tên gian hàng thành "NHỰA GIA DỤNG"
void SUA (GIANHANG &k)
{
    strcpy (k.TenGH, "NHUA GIA DUNG");
}
//Sắp xếp danh sách theo chiều tăng dần thể tích 
void SX (GIANHANG k)
{
    for (int i=0; i <k.n; i++)
        for (int j=i+1; j<k.n; j++)
            if(k.x[i].TheTich>k.x[j].TheTich)
                swap(k.x[i], k.x[j]);
}
int main ()
{
    GIANHANG a;
    a.NHAP();
    a.XUAT();
    SUA (a); 
    SX(a);
    a.XUAT();
}
