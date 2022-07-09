#include<bits/stdc++.h>
using namespace std; 

class DATE 
{
    private:
    int D,M,Y; 
    public: 
    void NHAP();
    void XUAT();

};
class NHANSU
{
    private: 
    char Manhansu[20];
    char Hoten[20];
    DATE NS;
    public: 
    void NHAP();
    void XUAT();
};

void DATE::NHAP()
{
    cout <<"Nhap ngay sinh :"; cin >> D;
    cout <<"Nhap thang sinh :"; cin >> M;
    cout <<"Nhap nam sinh :"; cin >> Y;
}
void DATE::XUAT()
{
    cout <<D<<"/"<<M<<"/"<<Y<<endl;
}

void NHANSU::NHAP()
{
    cout <<"Nhap ma nhan su    : "; fflush(stdin); gets(Manhansu); 
    cout <<"Nhap ten nhan su : "; fflush (stdin); gets(Hoten);
    NS.NHAP();
}
void NHANSU::XUAT()
{
    cout <<left<<setw(20)<<"MA NHAN SU  "<<setw(20)<<"HO TEN"
        <<setw(20)<<"Ngay/thang/nam sinh"<<endl;
    cout <<left <<setw(20)<<Manhansu <<setw(20)<<Hoten;
    NS.XUAT();
}

int main()
{
    NHANSU x;
    x.NHAP();
    cout << endl;
    x.XUAT();
    return 0;
}