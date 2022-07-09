#include<bits/stdc++.h>
using namespace std;
class BINHCHUA 
{
    float d,r,h;
    public: 
    BINHCHUA ()
    {
        d=r=h=0;
    }
    BINHCHUA (float d, float r, float h)
    {
        this-> d=d; 
        this-> r=r; 
        this-> h=h;
    }
    friend istream & operator >>(istream &is, BINHCHUA &y);
    friend ostream & operator <<(ostream &os, BINHCHUA y);
    bool operator*(BINHCHUA y);
    bool operator--();
};
istream & operator >>(istream &is, BINHCHUA &y)
{
    cout <<"Chieu dai d="; is>>y.d;
    cout <<"Chieu rong r="; is>>y.r;
    cout <<"Chieu cao h="; is>>y.h;
    return is;  
}
ostream & operator <<(ostream &os, BINHCHUA y)
{
    os<<"dai="<<y.d<<endl;
    os<<"rong="<<y.r<<endl;
    os<<"h="<<y.h<<endl;
    return os;
}

bool BINHCHUA ::operator*(BINHCHUA y)
{
    if (d*r*h==y.d*y.r*y.h) return true;
    else                    return false;
}
bool BINHCHUA :: operator--()
{
    if (d==r==h) return true; 
    else return false ;
}

int main ()
{
    BINHCHUA k, q;
    cin>>k>>q;
    ofstream FILE ("BINHCHUA.TXT", ios::out);
    cout <<k<<endl; FILE <<k<<endl;
    cout <<q<<endl; FILE <<q<<endl;
    cout <<"Dien tich hai binh bang nhau ?  ";
    if(k*q == true) cout <<"true"<<endl;
    else            cout <<"fale"<<endl;
    cout <<"BINH k la hinh lap phuong ? ";
    if(--k == true) cout <<"true"<<endl;
    else            cout <<"fale"<<endl;
    cout <<"BINH q la hinh lap phuong ? ";
    if(--q == true) cout <<"true"<<endl;
    else            cout <<"fale"<<endl;
    FILE <<"The tich hai binh bang nhau ?  "; 
    if(k*q == true) FILE <<"true"<<endl;
    else            FILE <<"fale"<<endl;
    FILE <<"BINH k la hinh lap phuong ? ";
    if(--k == true) FILE <<"true"<<endl;
    else            FILE <<"fale"<<endl;
    FILE <<"BINH q la hinh lap phuong ? ";
    if(--q == true) FILE <<"true"<<endl;
    else            FILE <<"fale"<<endl;
    FILE.close();
}

