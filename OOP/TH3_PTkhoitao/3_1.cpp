#include<bits/stdc++.h>
using namespace std;

class SINHVIEN
{
    char MaSV[20];
    char Hoten[20];
    float Diemtoan,Diemly,DiemHoa;
    public: 
    void NHAP();
    void XUAT();
    friend void SAP(SINHVIEN *a, int n);
};

void SINHVIEN::NHAP()
{
    cout << "Nhap MSV     : "; fflush (stdin); gets(MaSV);
    cout <<"Nhap Ho ten   : "; fflush(stdin); gets(Hoten);
    cout <<"Nhap diem toan: "; cin >>Diemtoan;
    cout <<"Nhap diem Hoa : "; cin >>DiemHoa; 
    cout <<"Nhap diem Li  : "; cin >>Diemly;
}
void SINHVIEN::XUAT()
{
    cout <<left << setw(20) <<MaSV <<setw(20)<<Hoten<<setw(20)
         <<Diemtoan<<setw(20)<<DiemHoa<<setw(20)<<Diemly<<setw(20)
         <<Diemly+Diemtoan+DiemHoa<<endl;
}

void SAP(SINHVIEN *a, int n)
{
    for (int i=0; i<n;i++)
        for (int j=i+1; j<n; j++)
            if(a[i].DiemHoa + a[i].Diemtoan + a[i].Diemly > a[j].Diemly +a[j].Diemtoan +a[j].DiemHoa)
            swap(a[i], a[j]);
}

int main ()
{
    SINHVIEN *k;
    int n;
    cout <<"Nhap so SV : "; cin >>n;
    k=new SINHVIEN[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Thong tin sinh vien thu "<<i+1<<":"<<endl;
        k[i].NHAP();
    }

    cout <<endl;
    SAP(k,n);
    cout <<left <<setw(20) <<"MSV "<<setw(20)<<"Ho ten"<<setw(20)<<"Diem toan"<<setw(20)<<"Diem Hoa"<<setw(20)<<"Diem ly"<<setw(20)<<"Tong Diem"<<endl;
    for (int i=0; i<n; i++)
    k[i].XUAT();

    return 0;
}