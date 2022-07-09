#include<bits/stdc++.h>
using namespace std;
class ELECTRONIC 
{
    protected:
    float congsuat;
    float dienap;
    public:
    ELECTRONIC(float a, float b);
};
ELECTRONIC::ELECTRONIC (float a, float b)
{
    congsuat=a;
    dienap=b;
}
class MAYGIAT:public ELECTRONIC
{
    float dungtich;
    char loai[10];
    public: 
    MAYGIAT(float a, float b, float c, char d[10]);
    void XUAT();
};
MAYGIAT::MAYGIAT (float a, float b, float c, char d[10]): ELECTRONIC(a,b)
{
    dungtich=c;
    strcpy(loai,d);
}
void MAYGIAT::XUAT()
{
    cout <<"CONG SUAT : "<<congsuat<<endl;
    cout <<"DIEN AP   : "<<dienap<<endl;
    cout <<"DUNG TICH : "<<dungtich<<endl;
    cout <<"LOAI      : "<<loai<<endl; 
}

class TULANH:public ELECTRONIC
{
    float dungtich;
    int so_ngan;
    public: 
    TULANH(float a, float b, float c, int d);
    void XUAT();
};
TULANH::TULANH (float a, float b, float c, int d):ELECTRONIC(a,b)
{
    dungtich=c;
    so_ngan=d;
}
void TULANH::XUAT()
{
    cout <<"CONG SUAT : "<<congsuat<<endl;
    cout <<"DIEN AP   : "<<dienap<<endl;
    cout <<"DUNG TICH : "<<dungtich<<endl;
    cout <<"SO NGAN   : "<<so_ngan<<endl; 
}
int main()
{
    MAYGIAT a(15, 23,4,"abcd");
    TULANH b(3,4,5,4);
    cout <<"\t\tTHONG TIN MAY GIAT "<<endl;
    a.XUAT();
    cout <<"\t\tTHONG TIN TU LANH "<<endl;
    b.XUAT();
}
