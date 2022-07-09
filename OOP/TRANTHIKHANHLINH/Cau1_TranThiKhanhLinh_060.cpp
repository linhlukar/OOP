#include<bits/stdc++.h>
using namespace std;
class PHIEU ;
class NHANVIEN 
{
    char MaNV[30], Ten[30],Ca[10];
    public: 
    void NHAP();
    void XUAT();
};
void NHANVIEN::NHAP()
{
    cout <<"Nhap Ma nhan vien : "; fflush(stdin); gets(MaNV);
    cout <<"Nhap Ten nhan vien : "; fflush(stdin); gets(Ten);
    cout <<"Nhap ca lam viec: "; fflush(stdin); gets(Ca);

}
void NHANVIEN :: XUAT()
{
    cout <<left <<setw(20)<<"MA NHAN VIEN : "<<setw(20)<<MaNV<<setw(20)<<"Ho Va Ten : "
        <<setw(20)<<Ten<<setw(20)<<"Ca lam viec : "<<Ca<<endl;
}
class BENHNHAN 
{
    char MaBN[20], HoTen[30], DiaChi[50];
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (PHIEU &k);
};
void BENHNHAN::NHAP()
{
    cout <<"Nhap ma benh nhan : "; fflush(stdin); gets (MaBN); 
    cout <<"Nhap ho ten BN : "; fflush(stdin); gets(HoTen);
    cout <<"Nhap dia chi BN : "; fflush(stdin ); gets(DiaChi);
}
void BENHNHAN :: XUAT()
{
    cout <<left <<setw(20)<<"MA BENH NHAN: "<<setw(20)<<MaBN<<setw(20)<<"Ho Va Ten : "
        <<setw(20)<<HoTen<<setw(20)<<"Dia chi : "<<DiaChi<<endl;
}
class THONGTIN 
{
    char MaTT[20], trieuchung[30]; 
    float songay;
    char MucDo[20], Ghichu[50];
    public: 
    void NHAP(); 
    void XUAT();
    friend class PHIEU;
    friend void SAP (PHIEU k);
};
void THONGTIN :: NHAP()
{
    cout <<"Nhap Ma Thong tin : "; fflush(stdin); gets(MaTT);
    cout <<"Nhap ten trieu chung : "; fflush(stdin); gets(trieuchung); 
    cout <<"Nhap so ngay : "; cin>>songay; 
    cout <<"Nhap muc do : "; fflush(stdin); gets(MucDo);
    cout <<"Nhap ghi chu : "; fflush(stdin); gets(Ghichu);
}
void THONGTIN::XUAT()
{
    cout <<left <<setw(20)<<MaTT<<setw(20)<<trieuchung<<setw(10)<<songay<<setw(20)<<MucDo<<setw(20)<<Ghichu<<endl;

}
class PHIEU
{
    char Maphieu[20]; 
    char Ngaylap[20];
    char Chidinh[50];
    NHANVIEN x;
    BENHNHAN y; 
    THONGTIN *z;
    int n;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (PHIEU &k);
    friend void SAP (PHIEU k);
};
void PHIEU :: NHAP()
{
    cout <<"Nhap Ma phieu : "; fflush(stdin); gets(Maphieu);
    cout <<"Nhap ngay lap : "; fflush(stdin); gets(Ngaylap); 
    x.NHAP();
    y.NHAP();
    cout <<"Nhap so trieu chung : "; cin >>n; 
    z= new THONGTIN [n];
    for (int i=0 ; i<n; i++)
    {
        cout <<"Nhap thong tin trieu chung thu "<<i+1<<endl;
        z[i].NHAP();
    }
    cout <<"Nhap chi dinh : "; fflush(stdin); gets(Chidinh);

}

void PHIEU :: XUAT()
{
    cout <<"PHONG KHAM METEC "<<endl;
    cout <<"\t\t\t PHIEU DANG KY KHAM"<<endl;
    cout <<left <<setw(20)<<"MA PHIEU : "<<setw(20)<<Maphieu<<setw(20)<<"Ngay lap  : "<<setw(20)<<Ngaylap<<endl;
    x.XUAT();
    y.XUAT();
    cout <<left <<setw(20)<<"MA TT"<<setw(20)<<"TEN TRIEU CHUNG"<<setw(10)<<"SO NGAY"<<setw(20)<<"MUC DO"<<setw(20)<<"GHI CHU"<<endl;
    float sumtt=0;
    for (int i=0; i<n; i++)
    {
        z[i].XUAT();
        sumtt+= z[i].songay;
    }
    cout <<"\t SO NGAY MAC TRUNG BINH : "<< sumtt / n<<endl;
    cout <<"chi dinh : "<<Chidinh<<endl;
    cout <<endl;
}
void SUA (PHIEU &k)
{
    strcpy (k.y.DiaChi, "VINH YEN");
}
void SAP (PHIEU k)
{
    for (int i=0; i<k.n; i++)
        for (int j=i+1; j<k.n; j++ )
        if(k.z[i].songay < k.z[j].songay)
        swap (k.z[i], k.z[j]);
}

int main ()
{
    PHIEU  a;
    a.NHAP();
    a.XUAT();
    cout <<endl;
    SUA(a); 
    SAP (a); 
    a.XUAT();
}