#include<bits/stdc++.h>
using namespace std;
class LASERPRINTER;

class PRINTER
{
    protected:
    float trongluong;
    char Hangsx[20];
    int namsx;
    float Tocdo;
};
class DOTPRINTER:public PRINTER
{
    float Matdokim;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (DOTPRINTER &a, LASERPRINTER &b);
};
void DOTPRINTER::NHAP()
{
    cout <<"Nhap trong luong may in : "; cin>>trongluong;
    cout <<"Nhap Hang san xuat      : "; fflush(stdin); gets(Hangsx);
    cout <<"Nhap Nam san xuat       : "; cin>>namsx;
    cout <<"Nhap toc do             : "; cin >>Tocdo;
    cout <<"Nhap mat do kim         : "; cin>>Matdokim;
}
void DOTPRINTER::XUAT()
{
    cout <<"TRONG LUONG : "<<trongluong<<endl;
    cout <<"HANG        : "<<Hangsx<<endl;
    cout <<"NAM SAN XUAT: "<<namsx<<endl;
    cout <<"TOC DO      : "<<Tocdo<<endl;
    cout <<"MAT DO KIM  : "<<Matdokim<<endl;
}
class LASERPRINTER : public PRINTER
{
    float dophangiai;
    public: 
    void NHAP();
    void XUAT();
    friend void SUA (DOTPRINTER &a, LASERPRINTER &b);
};
void LASERPRINTER::NHAP()
{
    cout <<"Nhap trong luong may in : "; cin>>trongluong;
    cout <<"Nhap Hang san xuat      : "; fflush(stdin); gets(Hangsx);
    cout <<"Nhap Nam san xuat       : "; cin>>namsx;
    cout <<"Nhap toc do             : "; cin >>Tocdo;
    cout <<"Nhap do phan giai       : "; cin>>dophangiai;
}
void LASERPRINTER::XUAT()
{
    cout <<"TRONG LUONG : "<<trongluong<<endl;
    cout <<"HANG        : "<<Hangsx<<endl;
    cout <<"NAM SAN XUAT: "<<namsx<<endl;
    cout <<"TOC DO      : "<<Tocdo<<endl;
    cout <<"DO PHAN GIAI: "<<dophangiai<<endl;
}

void SUA (DOTPRINTER &a, LASERPRINTER &b)
{
    a.namsx=2020;
    b.namsx=2020;
}
int main()
{
    DOTPRINTER a;
    LASERPRINTER b;

    cout <<"Nhap thong tin may in kim "<<endl;
    a.NHAP();
    cout <<"Nhap thong tin may in Laser "<<endl;
    b.NHAP();
    cout <<"\t\t THONG TIN MAY IN  "<<endl;
    cout <<"May in kim : "<<endl; a.XUAT();
    cout <<"May in Laser: "<<endl; b.XUAT();
    cout <<"SUA THONG TIN "<<endl;
    SUA(a,b);
    a.XUAT();
    b.XUAT();
}

