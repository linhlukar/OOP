#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class PHANSO
{
    int tu, mau;
    public: 
    friend istream&operator>> (istream &is, PHANSO &k);
    friend ostream&operator<< (ostream &os, PHANSO k);
    PHANSO operator*(PHANSO k);
    PHANSO operator/(PHANSO k); 
    PHANSO operator+(PHANSO k);//cộng hai phân số
    PHANSO operator-(PHANSO k);
    double operator++();//tính phân số 

};
istream&operator>>(istream &is, PHANSO &k)
{
    cout <<"Tu = "; is>>k.tu;
    cout <<"Mau = "; is>>k.mau;
    return is;
}
ostream&operator<<(ostream &os, PHANSO k)
{
    os<<k.tu<<"/"<<k.mau<<endl;
    return os;
}
PHANSO PHANSO::operator*(PHANSO k)
{
    PHANSO a;
    a.tu= tu * k.tu;
    a.mau= mau * k.mau;
    return a;
}
PHANSO PHANSO :: operator/(PHANSO k)
{
    PHANSO a;
    a.tu= tu * k.mau;
    a.mau= mau * k.tu;
    return a;
}
PHANSO PHANSO :: operator+(PHANSO k)
{
    PHANSO a;
    a.tu  = tu *k.mau + k.tu *mau;
    a.mau = mau*k.mau;
    return a;
}
PHANSO PHANSO :: operator-(PHANSO k)
{
    PHANSO a;
    a.tu  = tu *k.mau - k.tu *mau;
    a.mau = mau*k.mau;
    return a;
}
double PHANSO::operator++() // chuyển về số thập phân 
{
    return (double) tu/mau;
}

int main ()
{
    PHANSO a,b;
    cout <<"NHAP PHAN SO a : "; cin>>a;
    cout <<"Nhap phan so b : "; cin>>b;
    PHANSO TICH = a*b;
    cout <<"a * b = "<<++TICH<<endl;
    PHANSO THUONG = a/b;
    cout <<"a / b = "<<++THUONG<<endl;
    PHANSO TONG = a+b;
    cout <<"a + b = "<<++TONG<<endl;
    PHANSO HIEU = a-b;
    cout <<"a - b = "<<++HIEU<<endl;

    ofstream FILE ("C:/SQL2019/BTH.TXT", ios::app);
    FILE <<"a= "<<a<<endl;
    FILE <<"b= "<<b<<endl;
    FILE <<"a + b = "<<TONG<<endl;
    FILE <<"a - b = "<<HIEU<<endl;
    FILE <<"a * b = "<<TICH<<endl;
    FILE <<"a / b = "<<THUONG<<endl;
    FILE.close();

}