#include <bits/stdc++.h>
using namespace std;

class SACH
{
    private:
    char masach[20];
    char tensach[50];
    char nxb[50];
    int page;
    float gia;
    public:
    void NHAP();
    void XUAT();

};

void SACH::NHAP()
{
    cout <<"Nhap Ma sach : "; fflush(stdin ); gets(masach);
    cout <<"Nhap Ten sach: "; fflush(stdin); gets(tensach);
    cout <<"Nhap ten NXB : "; fflush(stdin); gets(nxb);
    cout <<"Nhap so trang: "; cin >>page;
    cout <<"Nhap gia tien: "; cin >>gia;
}
void SACH::XUAT()
{
    cout <<left <<setw(20)<<masach<<setw(20)<<tensach<<setw(20)<<nxb<<setw(20)<<page<<setw(20)<<gia<<endl;
}

int main ()
{
    int n;
    cout <<"Nhap so quyen sach: "; cin >>n;
    SACH *x;
    x=new SACH[n];
    for (int i=0; i<n;i++)
    {
        cout <<"Nhap thong tin quyen sach thu "<<i+1<<endl;
        x[i].NHAP();
    }
    cout <<left <<setw(20)<<"MA SACH"<<setw(20)<<"TEN SACH"<<setw(20)<<"NHA XUAT BAN"<<setw(20)<<"SO TRANG"<<setw(20)<<"GIA"<<endl;
    for (int i = 0; i<n ; i++)
    x[i].XUAT();
    return 0;
}