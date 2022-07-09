#include<bits/stdc++.h>
#include<fstream>

using namespace std;
class TAMTHUC
{
    double a,b,c;
    public: 
    TAMTHUC ()
    {
        a=b=c=0;
    }
    TAMTHUC (double x, double y, double z)
    {
        a=x;b=y;c=z;
    }
    friend ostream&operator <<(ostream &os, TAMTHUC y);
    TAMTHUC operator-();
    TAMTHUC operator+(TAMTHUC y);
    TAMTHUC operator-(TAMTHUC y);
};

ostream&operator <<(ostream &os, TAMTHUC y)
{
    os<<y.a<<"x"<< (char)253;
    if(y.b > 0) os<<"+"<<y.b<<"x";
    else        os<<"-"<<-y.b<<"x";
    if(y.c > 0) os <<"+"<<y.c<<endl;
    else        os<<"-"<<-y.c<<endl;
    return os;
}

TAMTHUC TAMTHUC::operator-()
{
    TAMTHUC k;
    k.a=-a;
    k.b=-b;
    k.c=-c;
    return k;
}

TAMTHUC TAMTHUC::operator+(TAMTHUC y)
{
    TAMTHUC k;
    k.a= a+y.a;
    k.b= b+y.b;
    k.c= c+y.c;
    return k;
}

TAMTHUC TAMTHUC::operator-(TAMTHUC y)
{
    TAMTHUC k;
    k.a= a-y.a;
    k.b= b-y.b;
    k.c= c-y.c;
    return k;
}

int main()
{
    TAMTHUC a(2,3,4), b(4,5,6);
    cout <<a;
    cout <<b;
    a=-a;
    b=-b;
    cout <<"DOI DAU Tam thuc 1 : "<<a;
    cout<<"DOI DAU TAM THUC 2: "<<b;

    TAMTHUC TONG=a+b;
    TAMTHUC HIEU=a-b;
    cout <<"TONG : "<<TONG;
    cout <<"HIEU : "<<HIEU<<endl;

    ofstream FILE ("C:/SQL2019/BTH.TXT", ios::app);
    FILE <<"TAM THUC 1 LA: "<<a;
    FILE <<"TAM THUC 2 LA: "<<b;
    FILE <<"DAO DAU TAM THUC 1: "<<-a;
    FILE <<"DAO DAU TAM THUC 2: "<<-b;
    FILE <<"TONG : "<<TONG;
    FILE <<"HIEU : "<<HIEU<<endl;
    FILE.close();

    return 0;
}
