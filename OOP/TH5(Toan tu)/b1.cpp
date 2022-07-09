#include <bits/stdc++.h>
using namespace std ; 

class PS
{
    int tu; 
    int mau; 
    public: 
    PS()
    {
        this-> tu = 0; 
        this-> mau = 1; 
    };
    PS(int tu, int mau)
    {
        this -> tu = tu; 
        this -> mau = mau; 
    };
    friend istream&operator>>(istream &is, PS &k); 
    friend ostream&operator<<(ostream &os, PS k);
    PS operator*(PS k);
    PS operator/(PS k); 
    PS operator+(PS k);//cộng hai phân số
    PS operator-(PS k);
    double operator ++();
    
};
istream&operator>>(istream &is, PS &k)
{
    cout <<"Tu = "; is>>k.tu;
    cout <<"Mau = "; is>>k.mau;
    return is;
}
ostream&operator<<(ostream &os, PS k)
{
    os<< "Tu/Mau = "<<k.tu<<"/"<<k.mau<<endl;
    return os;
}

PS PS::operator*(PS k)
{
    PS a;
    a.tu= tu * k.tu;
    a.mau= mau * k.mau;
    return a;
}
PS PS :: operator/(PS k)
{
    PS a;
    a.tu= tu * k.mau;
    a.mau= mau * k.tu;
    return a;
}
PS PS :: operator+(PS k)
{
    PS a;
    a.tu  = tu *k.mau + k.tu *mau;
    a.mau = mau*k.mau;
    return a;
}

PS PS :: operator- (PS k)
{
    PS a;
    a.tu  = tu *k.mau - k.tu *mau;
    a.mau = mau*k.mau;
    return a;
}

double PS :: operator++()
{
    return (double) tu/mau; 
}

int main()
{
    PS a, b;
    cout <<"NHAP PHAN SO a : "; cin>>a;
    cout <<"Nhap phan so b : "; cin>>b;
    PS TICH = a*b;
    cout <<"a * b = "<<++TICH<<endl;
    PS THUONG = a/b;
    cout <<"a / b = "<<++THUONG<<endl;
    PS TONG = a+b;
    cout <<"a + b = "<<++TONG<<endl;
    PS HIEU = a-b;
    cout <<"a - b = "<<++HIEU<<endl;
    

}