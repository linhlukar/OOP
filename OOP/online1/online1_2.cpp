#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class SV
{
    char MSV[20], tenSV[30];
    char tenlop[10];
    int khoa;
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;

};
void SV::NHAP()
{
    cout <<"Nhap ma sinh vien : "; fflush(stdin); gets(MSV);
    cout <<"Nhap ten sinh vien: "; fflush(stdin); gets(tenSV);
    cout <<"Nhap ten lop : "; fflush(stdin); gets(tenlop);
    cout <<"Nhap khoa    : "; cin>>khoa;
}
void SV::XUAT()
{
    cout <<left<<setw(18)<<"MA SINH VIEN : "<<setw(20)<<MSV<<setw(10)<<"TEN SINH VIEN : "<<tenSV<<endl;
    cout <<left<<setw(18)<<"LOP : "<<setw(20)<<tenlop<<setw(10)<<"KHOA : "<<khoa<<endl;

}

class MONHOC
{
    char tenmon[30];
    int sotrinh;
    float diem;
    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend void TIM( PHIEU k);
    friend void Chen(PHIEU &k, MONHOC z, int vt);

};
void MONHOC :: NHAP()
{
    cout <<"Nhap ten mon : "; fflush(stdin); gets(tenmon);
    cout <<"Nhap so trinh: "; cin>>sotrinh;
    cout <<"Nhap diem    : "; cin>>diem;
}
void MONHOC::XUAT()
{
    cout <<left <<setw(20)<<tenmon<<setw(12)<<sotrinh<<diem<<endl;
}

class PHIEU
{
    SV x;
    int n;
    MONHOC *z;
    public: 
    void NHAP();
    void XUAT();
    friend void TIM( PHIEU k);
    friend void Chen(PHIEU &k, MONHOC z, int vt);


};
void PHIEU::NHAP()
{
    x.NHAP();
    cout <<"Nhap so mon hoc: "; cin>>n;
    z=new MONHOC[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Diem mon hoc thu "<<i+1<<":"<<endl;
        z[i].NHAP();
    }
}
void PHIEU::XUAT()
{
    cout <<"\t\t PHIEU BAO DIEM "<<endl;
    x.XUAT();
    float sum=0;
    int sumST=0;
    cout <<"BANG DIEM : "<<endl;
    cout <<left <<setw(20)<<"TEN MON"<<setw(12)<<"SO TRINH"<<"DIEM"<<endl;
    for (int i=0; i<n; i++)
    {
        z[i].XUAT();
        sum += z[i].sotrinh*z[i].diem;
        sumST += z[i].sotrinh;
    }
    cout <<"\t\tDIEM TRUNG BINH : "<< sum / sumST <<endl;
}

//bonus 1: tên môn học có số trình > 3
void TIM( PHIEU k)
{
    for (int i=0; i<k.n; i++)
    if(k.z[i].sotrinh > 3 )
    cout <<k.z[i].tenmon<<endl;
}
//bonus 2: Chèn môn học bất kì 
void Chen(PHIEU &k, MONHOC z, int vt)
{
    vt--;
    k.z=(MONHOC*)realloc(k.z, (k.n+1)* sizeof (MONHOC));
    for (int i=k.n-1; i>=vt; i--)
    k.z[i+1]=k.z[i];
    k.z[vt]=z;
    k.n++;
}

int main ()
{
    PHIEU k;
    k.NHAP();
    k.XUAT();
    cout <<"BONUS 1 : "<<endl;
    cout <<"Mon hoc co so trinh lon hon 3 la : "<<endl;
    TIM(k);
    cout <<endl;
    cout <<"BONUS 2 : "<<endl;
    MONHOC a;
    a.NHAP();
    int n;
    cout <<"Nhap vi tri chen : "; cin>> n;
    Chen(k,a,n);
    k.XUAT();

}