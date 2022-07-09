#include<bits/stdc++.h>
using namespace std;
class HOP
{
    float h, r, G;
    public: 
    HOP()
    {
        h=r=G=0;
    }
    HOP ( float h, float r, float G)
    {
        this->h=h;
        this->r=r;
        this->G=G;
    }
    friend istream& operator>> (istream &is, HOP &y) ;
    friend ostream& operator<< (ostream &os, HOP y);
    HOP operator+(HOP k);
    bool operator*(HOP k);
};
istream & operator >> (istream &is, HOP &y)
{
    cout <<"Nhap chieu cao h : "; is>>y.h;
    cout <<"Nhap ban kinh R  : "; is>>y.r; 
    cout <<"Nhap Trong luong G: "; is>>y.G;
    return is;
}
ostream& operator<< (ostream &os, HOP y)
{
    os<<"CHIEU CAO : "<<y.h<<endl;
    os<<"BAN KINH  : "<<y.r<<endl;
    os<<"TRONG LUONG: "<<y.G<<endl;
    return os;
}
HOP HOP :: operator+ (HOP k)
{
    HOP m;
    if(r==k.r)
    {
        m.r=r;
        m.h= h + k.h;
        m.G= G + k.G;
    }
    else 
    {
        m.r=m.h=m.G=0;
    }
    return m;
}
//
bool HOP:: operator* (HOP k)
{
    float S= M_PI *k.r*k.r;
    if(S < 5) 
        return true;
    else 
        return false;
}
int main ()
{
    HOP k(2,3,4), m(4,3,6);
    cout <<endl;
    HOP TONG=k+m;
    cout <<"TONG " <<TONG;
    cout <<endl;

}
//chưa xong