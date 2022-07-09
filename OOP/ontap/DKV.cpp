#include <bits/stdc++.h>
using namespace std;
class BINHCHUA
{
    float a,b,h;
public:
    BINHCHUA();
    BINHCHUA(float x,float y,float z);
    bool operator -(BINHCHUA B);
    bool operator --();
    friend istream&operator>>(istream& x,BINHCHUA& y);
    friend ostream&operator<<(ostream& x,BINHCHUA y);
};
BINHCHUA::BINHCHUA()
{
    a=b=h=0;
}
BINHCHUA::BINHCHUA(float x,float y,float z)
{
    a=x;
    b=y;
    h=z;
}
istream&operator>>(istream& x,BINHCHUA& y)
{
    cout<<"nhap chieu dai: ";
    x>>y.a;
    cout<<"nhap chieu rong: ";
    x>>y.b;
    cout<<"nhap chieu cao: ";
    x>>y.h;
    return x;
}
ostream&operator<<(ostream& x,BINHCHUA y)
{
    x<<"chieu dai binh chua: "<<y.a<<endl;
    x<<"chieu rong binh chua: "<<y.b<<endl;
    x<<"chieu cao binh chua: "<<y.h<<endl;
    x<<"the tich binh chua: "<<y.a*y.b*y.h<<endl;
    return x;
}
bool BINHCHUA :: operator-(BINHCHUA B)
{
    if(a*b*h==B.a*B.b*B.h)
        return true;
    else return false;
}
bool BINHCHUA :: operator--()
{
    if (a==b==h)
        return true;
    else return false;
}
int main()
{
    BINHCHUA A,B;
    cout<<"nhap thong tin binh chua A: "<<endl;
    cin>>A;
    cout<<A<<endl;
    cout<<"nhap thong tin binh chua B: "<<endl;
    cin>>B;
    cout<<B<<endl;
    cout<<"kiem tra dien tich cua hai binh chua: "<<A-B<<endl;
    cout<<"Binh chua A la hinh lap phuong: "<<--A<<endl;
    cout<<"Binh chua B la hinh lap phuong: "<<--B<<endl;
    ofstream f("E:/BINHCHUA.TXT", ios::app);
     f<<A<<endl;
     f<<B<<endl;
     f<<"kiem tra dien tich cua hai binh chua: "<<A-B<<endl;
     f<<"Binh chua A la hinh lap phuong: "<<--A<<endl;
     f<<"Binh chua B la hinh lap phuong: "<<--B<<endl;
     f.close();

}
