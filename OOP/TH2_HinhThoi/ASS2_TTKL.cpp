#include<bits/stdc++.h>
using namespace std;

class LOPHOC;
class NGUOI
{
    char Hoten[30];
    char Ngaysinh[15];
    char QueQuan[30];
    public: 
    void NHAP();
    void XUAT();
};
class SINHVIEN : public NGUOI
{
    char MaSV[20];
    char Nganh[20];
    int Khoahoc;
    public:
    void NHAP();
    void XUAT();
    friend void Dem(LOPHOC k);
    friend void SapXep(LOPHOC k);

};
class LOPHOC
{
    char MaLH[20],TenLH[20];
    char NgayMo[15];
    SINHVIEN *x;
    int n ;
    char Giaovien[30];
    public: 
    void NHAP();
    void XUAT();
    friend void Dem(LOPHOC k);
    friend void SapXep(LOPHOC k);
};

void NGUOI::NHAP()
{
    cout <<"Nhap ho ten: "; fflush(stdin); gets(Hoten);
    cout <<"Nhap Ngay sinh: "; fflush( stdin); gets(Ngaysinh);
    cout <<"Nhap Que quan : "; fflush (stdin); gets( QueQuan);
}

void NGUOI::XUAT()
{
    cout <<setw(25)<<Hoten<<setw(20)<<Ngaysinh<<setw(30)<<QueQuan<<endl;
}

void SINHVIEN::NHAP()
{
    cout <<"Nhap MSV : "; fflush(stdin); gets(MaSV);
    NGUOI::NHAP();
    cout <<"Nhap Nganh : "; fflush( stdin); gets(Nganh);
    cout <<"Nhap Khoa hoc: "; cin >>Khoahoc;

}
void SINHVIEN::XUAT()
{
    cout <<left <<setw(20)<<MaSV<<setw(20)<<Nganh<<setw(15)<<Khoahoc;
    NGUOI::XUAT();
}

void LOPHOC::NHAP()
{
    cout <<"Nhap ma lop hoc: "; fflush (stdin); gets(MaLH);
    cout <<"Nhap ten lop hoc: "; fflush (stdin); gets(TenLH);
    cout <<"Nhap ngay mo    : "; fflush (stdin); gets(NgayMo);
    cout <<"Nhap Giao vien  : "; fflush(stdin); gets(Giaovien);
    cout <<"Nhap so sinh vien cua lop : "; cin >>n;
    x= new SINHVIEN[n];
    for (int i=0; i<n ; i++)
    {
        cout <<"Nhap thong tin sinh vien thu "<<i+1<<":"<<endl;
        x[i].NHAP();
    }
}
void LOPHOC::XUAT()
{
    cout <<"Ma lop hoc : "<<MaLH<<endl;
    cout <<"Ten lop hoc: "<<TenLH<<endl;
    cout <<"Ngay mo lop: "<<NgayMo<<endl;
    cout <<"Thong tin sinh vien :"<<endl;
    cout <<left <<setw(20)<<"MA SINH VIEN"<<setw(20)<<"NGANH"<<setw(15)<<"KHOA HOC"
    <<setw(25)<<"HO TEN"<<setw(20)<<"NGAY SINH"<<setw(30)<<"QUE QUAN"<<endl;
    for (int i=0; i<n; i++)
        x[i].XUAT();
    cout <<"Ten giao vien : "<<Giaovien<<endl;

}

//bonus 2: Cho biet lop hoc co bao nhieu sinh vien khoa 11 ?
void Dem(LOPHOC k)
{
    int dem =0;
    for (int i=0; i<k.n; i++)
    {
        if(k.x[i].Khoahoc==11)
        dem++;
    }
    cout <<"So sinh vien khoa 11 la "<<dem<<endl;
}

//bonus 3: Sap xep danh sach tang dan khoa hoc 
void SapXep(LOPHOC k)
{
    for (int i=0; i<k.n; i++)
    {
        for (int j=i+1; j<k.n; j++)
        {
            if(k.x[i].Khoahoc > k.x[j].Khoahoc)
            swap(k.x[i], k.x[j]);
        }
    }
}

int main ()
{
    LOPHOC a;
    a.NHAP();
    cout <<"======================================================="<<endl;
    cout <<"BONUS 1 :"<<endl;
    a.XUAT();
    cout <<endl;
    cout <<"BONUS 2: "<<endl;
    Dem(a);
    cout <<endl;
    cout <<"BONUS 3: "<<endl;
    SapXep(a);
    a.XUAT();
    return 0;
}
