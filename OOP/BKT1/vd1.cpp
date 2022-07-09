#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class BANGDIEM;

class MONHOC
{
    char Mamon[4];
    char Tenmon[15];
    float Diemthi;
    float Diemtongket;
    friend void sua(BANGDIEM &a);
    friend class BANGDIEM;
    friend void sapxep(BANGDIEM &a);
    friend void dem(BANGDIEM &a);
public:
    void NHAP();
    void XUAT();
};

void MONHOC::NHAP()
{
    cout << "Nhap ma mon: "; fflush(stdin); gets(Mamon);
    cout << "Nhap ten mon: "; fflush(stdin); gets(Tenmon);
    cout << "Nhap diem thi: "; cin >> Diemthi;
    cout << "Nhap diem tong ket: "; cin >> Diemtongket;
}

void MONHOC::XUAT()
{
    cout << setw(10) << Mamon << setw(20) << Tenmon << setw(10) << Diemthi << setw(15) << Diemtongket << endl;
}

class BANGDIEM
{
    char Maphieu[4];
    char Ngaycap[10];
    char Masinhvien[10];
    char Hoten[20];
    char Ngaysinh[10];
    char Manganh[10];
    char Tennganh[20];
    MONHOC *x;
    int n;
    float DiemtongketTB=0;
    friend void sua(BANGDIEM &a);
    friend void sapxep(BANGDIEM &a);
    friend void dem(BANGDIEM &a);
public:
    void NHAP();
    void XUAT();
};

void BANGDIEM::NHAP()
{
    cout << "Nhap ma phieu:"; fflush(stdin); gets(Maphieu);
    cout << "Nhap ngay cap:"; fflush(stdin); gets(Ngaycap);
    cout << "Nhap ma sinh vien:"; fflush(stdin); gets(Masinhvien);
    cout << "Nhap ho ten:"; fflush(stdin); gets(Hoten);
    cout << "Nhap ngaysinh:"; fflush(stdin); gets(Ngaysinh);
    cout << "Nhap manganh:"; fflush(stdin); gets(Manganh);
    cout << "Nhap ten nganh: "; fflush(stdin); gets(Tennganh);
    cout << "n="; cin >> n;
    x = new MONHOC[n];
    for (int i=0;i<n;i++)
    {
        x[i].NHAP();
        DiemtongketTB += x[i].Diemtongket;
    }
}

void BANGDIEM::XUAT()
{
    cout << "Ma phieu: " << setw(4) << Maphieu << "Ngay cap: " << setw(10) << Ngaycap << endl
    << "Ma sinh vien: " << setw(10) << Masinhvien << "Ho ten: " << setw(20) << Hoten << "Ngay sinh: " << Ngaysinh << endl
    << "Ma nganh: " << setw(10) << Manganh << "Ten nganh: " << Tennganh << endl;
    cout << setw(20) << "Ten mon" << setw(10) << "Diem thi"  << setw(15) << "Diem tong ket" << endl;
    for (int i=0;i<n;i++)
    {
        x[i].XUAT();
    }
    cout << setw(50) << "Diem tong ket trung binh: " << DiemtongketTB/n;
    cout << setw(20) << "HIEU TRUONG" << setw(30) << "PHONG DAO TAO" << endl;
}

void sua(BANGDIEM &a)
{
    for(int i=0;i<a.n;i++)
    {
        if(strcmp(a.x[i].Mamon, "H003") == 0)
            strcpy(a.x[i].Tenmon, "DAISO");
    }
}

void sapxep(BANGDIEM &a)
{
    for(int i=0;i<a.n-1;i++)
    {
        for(int j=i+1;j<a.n;j++)
        {
            if(a.x[i].Diemtongket>a.x[j].Diemtongket)
            {
                MONHOC b = a.x[i];
                a.x[i] = a.x[j];
                a.x[j] = b;
            }
        }
    }
}

void dem(BANGDIEM &a)
{
    int dem=0;
    for(int i=0;i<a.n;i++)
    {
        if (a.x[i].Diemthi>7)
            dem++;
    }
    cout << "So mon hoc co diem thi > 7: " << dem << endl;

}

int main()
{
    BANGDIEM a;
    a.NHAP();
    a.XUAT();
    sua(a);
    sapxep(a);
    dem(a);
    return 0;
}