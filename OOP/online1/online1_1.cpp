#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class NCC
{
    char MaNCC[20], tenNCC[30], diachi[50];
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
void NCC::NHAP()
{
    cout <<"Nhap Ma NCC : "; fflush(stdin); gets(MaNCC);
    cout <<"Nhap Ten NCC: "; fflush(stdin); gets(tenNCC);
    cout <<"Nhap dia chi NCC: "; fflush(stdin); gets(diachi);

}
void NCC::XUAT()
{
    cout <<left <<setw(10)<<"MA NCC : "<<setw(30)<<MaNCC<< setw(10)<<"TEN NCC : "<<tenNCC<<endl;
    cout <<left <<setw(10)<<"DIA CHI: "<<setw(30)<<diachi<<endl;
}

class HANG
{
    char tenhang[30];
    float don_gia;
    int soluong;
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
void HANG::NHAP()
{
    cout <<"Nhap ten Hang : "; fflush(stdin); gets(tenhang);
    cout <<"Nhap don gia  : "; cin>>don_gia;
    cout <<"Nhap so luong : "; cin>>soluong;
}
void HANG::XUAT()
{
    cout << left <<setw(15)<<tenhang<<setw(15)<<don_gia<<setw(15)<<soluong<<don_gia*soluong<<endl;
}

class PHIEU 
{
    private: 
    char Maphieu[30];
    char Ngaylap[15];
    NCC x;
    HANG *y;
    int n;
    public: 
    void NHAP();
    void XUAT();
};
void PHIEU::NHAP()
{
    cout<<"Nhap ma phieu : "; fflush(stdin); gets(Maphieu);
    cout <<"Nhap ngay lap: "; fflush(stdin); gets(Ngaylap);
    cout <<"Nhap thong tin NCC :"<<endl;
    x.NHAP();
    cout <<"Nhap so luong san pham : "; cin>>n;
    y=new HANG[n];
    for(int i=0; i<n; i++)
    {
        cout <<"Thong tin mat hang thu "<<i+1<<":"<<endl;
        y[i].NHAP();
    }
}
void PHIEU::XUAT()
{
    
    cout <<left <<setw(10)<<"MA PHIEU : "<<setw(30)<<Maphieu<< setw(10)<<"NGAY LAP : "<<Ngaylap<<endl;
    x.XUAT();
    float sumTT=0;    
    cout << left <<setw(15)<<"TEN HANG"<<setw(15)<<"DON GIA"<<setw(15)<<"SO LUONG"<<"THANH TIEN"<<endl;
    for (int i=0; i<n; i++)
    {
    y[i].XUAT();
    sumTT += y[i].don_gia * y[i].soluong;    
    }
    cout <<left<<setw(30) <<" " <<setw(15)<<"CONG THANH TIEN : "<<setw(20)<<sumTT<<endl;
  
    
}

int main()
{
    PHIEU k; 
    k.NHAP();
    cout <<"\t\t\t PHIEU NHAP HANG "<<endl;
    k.XUAT();
}