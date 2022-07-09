#include<bits/stdc++.h>
using namespace std;
class DOANTHANG
{
    float x1, x2, y1,y2;
    public: 
    DOANTHANG ()
    {
        x1=x2=y1=y2=0;
    }
    DOANTHANG(float a, float b, float c, float d)
    {
        x1=a;
        x2=b;
        y1=c;
        y2=d;
    }
    friend istream& operator >>(istream &is, DOANTHANG &y );
    friend ostream & operator <<(ostream &os, DOANTHANG y);
    float operator++();
    DOANTHANG operator+ (DOANTHANG y);
    bool operator* (DOANTHANG y);

};

istream& operator >>(istream &is, DOANTHANG &y )
{
    cout <<"x1="; is>>y.x1;
    cout <<"x2="; is>>y.x2;
    cout <<"y1="; is>>y.y1;
    cout <<"y2="; is>>y.y2;

    return is;

}
ostream & operator <<(ostream &os, DOANTHANG y)
{
    os<<"A("<<y.x1<<";"<<y.y1<<")"<<endl;
    os<<"B("<<y.x2<<";"<<y.y2<<")"<<endl;

    return os;
}
//toán tử Tính độ dài
float DOANTHANG :: operator++()
{
    return sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
}
//toán tử cộng hai đoạn thẳng 
DOANTHANG DOANTHANG:: operator+(DOANTHANG y)
{
    DOANTHANG k;
    k.x1= x1+y.x1;
    k.x2=x2+y.x2;
    k.y1=y1+y.y1;
    k.y2=y2+y.y2;

    return k;

}
//phương thức trả về true nếu hai đoạn thẳng bằng nhau , trả về false nếu hai đoạn thẳng khác nhau 
 bool DOANTHANG :: operator* (DOANTHANG y)
{   float a1= sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    if(a1==(++y))
    {
        return true;
    }
    else return false;
}


int main()
{
    DOANTHANG a,b;
    cout <<"DOAN THANG a: ";
    cin>>a;
    cout <<"DOAN THANG b;";
    cin>>b;
    ofstream f("C:/DOANTHANG.TXT", ios::app);
    f<<"DOAN THANG a : "<<a<<endl;
    cout <<"DOAN THANG a : "<<a<<endl;
    f<<"DOAN THANG b : "<<b<<endl;
    cout<<"DOAN THANG b : "<<b<<endl;
    f<<"Do dai doan a : "<<++a<<endl;
    f<<"Do dai doan b: "<<++b<<endl;
    cout<<"Do dai doan a : "<<++a<<endl;
    cout<<"Do dai doan b: "<<++b<<endl;
    f<<"TONG 2 DOAN THANG : "<<(++a)+(++b)<<endl;
    cout <<"TONG 2 DOAN THANG : "<<(++a)+(++b)<<endl;
    if(a*b==true)
    cout <<"true";
    else 
    cout <<"KHAC";
    
    if(a*b==true)
    f <<"true";
    else 
    f <<"KHAC";
    f.close();
}
