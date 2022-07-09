#include<bits/stdc++.h>
using namespace std;
class HINH_TAM_GIAC
{
    float a,b,c;
    public:
    float operator++();
    friend HINH_TAM_GIAC operator+( HINH_TAM_GIAC y);
    friend istream& operator>>(istream &is, HINH_TAM_GIAC &y);
    friend ostream& operator<<(ostream &os, HINH_TAM_GIAC y);

};
istream & operator>>(istream &is, HINH_TAM_GIAC &y)
{
    cout <<"a="; is>>y.a;
    cout <<"b="; is>>y.b;
    cout <<"b="; is>>y.c;

    return is; 
}

float HINH_TAM_GIAC :: operator++()
{
    return a+b+c;
}
ostream& operator<<(ostream &os, HINH_TAM_GIAC y)
{
    os<<"a="<<y.a<<endl;
    os<<"b="<<y.b<<endl;
    os<<"c="<<y.c<<endl;

    return os;
}
int main()
{
    HINH_TAM_GIAC P,Q;
    cin>>P;
    cin>>Q;
    cout <<"TAM GIAC P co : "<<endl<<P;
    cout <<"CHU VI TAM GIAC P = "<<++P<<endl;
    cout <<"TAM GIAC Q co : "<<endl<<Q;
    cout <<"CHU VI TAM GIAC Q = "<<++Q<<endl;
    ofstream FILE("C:/SQL2019/INOUT.txt", ios::out);
    FILE<<"TAM GIAC P co :  "<<endl;
    FILE <<P<<endl;
    FILE<<"CHU VI TAM GIAC P = "<<++P<<endl;
    FILE<<"TAM GIAC Q co : "<<endl;
    FILE<<Q<<endl;
    FILE<<"CHU VI TAM GIAC Q = "<<++Q<<endl;
    FILE.close();
}

