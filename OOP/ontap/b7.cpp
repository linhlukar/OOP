#include<bits/stdc++.h>
using namespace std;
class BAIXE ;
class PHUONGTIEN
{
    protected: 
    char MaPT[20], Loai[10], HangSX[30];
    float Gia;
    public: 
    void NHAP();
    void XUAT();

};
void PHUONGTIEN::NHAP()
{
    cout <<"Nhap ma phuong tien : "; fflush(stdin); gets(MaPT); 
    cout <<"Nhap loai           : "; fflush(stdin); gets(Loai); 
    cout <<"Nhap Gia            : "; cin>>Gia;
    cout <<"Nhap Hang san xuat  : "; fflush(stdin); gets(HangSX); 
}
void PHUONGTIEN::XUAT()
{
    cout<<setw(10) <<MaPT<< setw(10)<<Loai<<setw(10)<<Gia<<setw(20)<<HangSX<<endl;
}

class XEMAY: public PHUONGTIEN
{
    char MaXe[20], TenXe[20], BienSo[10];
    float Dungtich;
    public: 
    void NHAP(); 
    void XUAT();
    friend void SAP (BAIXE k);
};
void XEMAY :: NHAP()
{
    PHUONGTIEN ::NHAP();
    cout <<"Nhap ma xe : "; fflush(stdin); gets(MaXe);
    cout <<"Nhap ten xe : "; fflush(stdin); gets(TenXe);
    cout <<"Nhap Dung tich xe : "; cin>>Dungtich;
    cout <<"Nhap Bien so xe : "; fflush(stdin); gets(BienSo);

}
void XEMAY :: XUAT()
{
    cout<<left<<setw(10) <<MaXe<<setw(20)<<TenXe<<setw(10)<<Dungtich<<setw(10)<<BienSo;
    PHUONGTIEN ::XUAT();
}
class BAIXE
{
    char MaBX[20], TenBX[20]; 
    double Dientich;
    XEMAY *x;
    int n; 
    public: 
    void NHAP();
    void XUAT(); 
    friend void SUA (BAIXE &k);
    friend void SAP (BAIXE k);


};
void BAIXE::NHAP()
{
    cout <<"Nhap ma ben xe : "; fflush(stdin); gets(MaBX);
    cout <<"Nhap ten ben xe : "; fflush(stdin); gets(TenBX);
    cout <<"Nhap Dien tich : "; cin >>Dientich;
    cout <<"Nhap so xe : "; cin>>n;
    x=new XEMAY[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin xe may thu "<<i+1<<endl;
        x[i].NHAP();
    }
}
void BAIXE :: XUAT()
{
    cout <<"MA BEN XE : "<<MaBX<<endl;
    cout <<"TEN BEN XE: "<<TenBX<<endl;
    cout <<"DIEN TICH : "<<Dientich<<endl;
    cout<<left<<setw(10) <<"MA XE"<<setw(20)<<"TEN XE"<<setw(10)<<"DUNG TICH"<<setw(10)<<"BIEN SO"
        <<setw(10) <<"MA PT"<< setw(10)<<"LOAI"<<setw(10)<<"Gia"<<setw(20)<<"HANG SAN XUAT"<<endl;
    for (int i=0;i <n; i++)
    x[i].XUAT();
}
//SỬA tên bãi xe thành MAi Dịch 
void SUA (BAIXE &k)
{
    strcpy (k.TenBX, "MAI DICH");
}
//Sắp xếp danh sách theo chiều tăng dần : 
void SAP (BAIXE k)
{
    for (int i=0; i<k.n; i++)
        for (int j=i+1; j<k.n; j++)
            if(k.x[i].Dungtich > k.x[j].Dungtich)
                swap (k.x[i], k.x[j]);
}
int main ()
{
    BAIXE a;
    a.NHAP();
    a.XUAT();
    SUA (a);
    SAP(a);
    a.XUAT();
}