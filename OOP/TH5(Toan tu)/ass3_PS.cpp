#include<bits/stdc++.h>
#include<fstream>

using namespace std ;
class PHANSO
{
    float tu, mau;
    public: 

    PHANSO()
    {
        tu=0;
        mau=1;
    }
    PHANSO(float a, float b)
    {
        tu=a;
        mau=b;
    }
    PHANSO operator*(PHANSO x);
    float operator++();
    friend istream& operator>> (istream& x, PHANSO &y);
    friend ostream& operator<<(ostream& x, PHANSO y);

};
//nhân 2 phân số
 PHANSO PHANSO ::  operator*(PHANSO x)
{
    PHANSO k;
    k.tu= tu * x.tu;
    k.mau= mau * x.mau;
    return k;
}
//trả về giá trị float
float PHANSO::operator++()
{
    return tu/mau;
}
 
istream& operator>> (istream& x, PHANSO &y)
{
    cout <<"Tu = "; x>>y.tu;
    cout <<"Mau = "; x >>y.mau;
    return x;
}
ostream& operator<<(ostream& x, PHANSO y)
{
    x << y.tu <<"/"<<y.mau;
    return x;
}

int main()
{
    PHANSO a,b;
    cout <<"Nhap Phan so a :"; cin>>a;
    cout <<"Nhap Phan so b : "; cin >>b;
    cout <<"a="<<a<<endl;
    cout <<"b="<<b;
    cout <<endl;
    
    PHANSO tich = a*b;
    cout <<"a * b = "<<tich;

ofstream FILE ("C:/SQL2019/BTH.TXT", ios::app);
    FILE <<"a = "<<a<<endl;
    FILE <<"b = "<<b<<endl;
    FILE <<"a * b = " <<a<<" * "<<b<<" = "<< tich <<endl;
    FILE.close();
    return 0;
}