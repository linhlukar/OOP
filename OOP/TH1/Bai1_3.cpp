#include<bits/stdc++.h>
using namespace std;

class HANG
{
    private:
    char MaHang[20];
    char Tenhang[30];
    float Dongia;
    int soluong;

    public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout <<"Nhap ma hang : "; fflush(stdin); gets(MaHang);
    cout <<"Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout <<"Nhap Don gia : "; cin >>Dongia;
    cout <<"Nhap So luong: "; cin >>soluong;
}
void HANG::XUAT()
{
    cout <<left<<setw(20)<<MaHang<<setw(30)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<soluong<<endl;
}
int main ()
{
    int n;
    cout <<"Nhap so luong mat hang: "; cin >>n;
    HANG *x;
    x=new HANG[n];
    for (int i=0; i < n ; i++)
    {
        cout <<"Nhap thong tin mat hang thu "<<i+1<<endl;
        x[i].NHAP();
    }
    cout <<left<<setw(20)<<"Ma Hang"<<setw(30)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<endl;
    for (int i=0;i<n;i++)
    x[i].XUAT();
    return 0;

}