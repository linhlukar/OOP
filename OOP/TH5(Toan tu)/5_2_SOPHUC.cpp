#include<bits/stdc++.h>
#include<fstream>

using namespace std;
class SOPHUC
{
    double thuc,ao;
    public: 

    SOPHUC ()
    {
    thuc=ao=0;
    }
    SOPHUC ( double x, double y)
    {
        thuc=x;
        ao=y;
    }
    ~SOPHUC (){};

    friend ostream & operator<<(ostream &os, SOPHUC y);
    SOPHUC operator+ (SOPHUC k);
    SOPHUC operator- (SOPHUC k);

};
ostream & operator<<(ostream &os, SOPHUC y)
{
    os<<y.thuc<<" + i*"<<y.ao;
    return os;
}
//cộng hai số phức
SOPHUC SOPHUC::operator+ (SOPHUC k)
{
    SOPHUC m;
    m.thuc= thuc + k.thuc;
    m.ao  = ao   + k.ao  ;
    return m;
}
//trừ hai số phức : 
SOPHUC SOPHUC::operator- (SOPHUC k)
{
    SOPHUC m;
    m.thuc= thuc - k.thuc;
    m.ao  = ao   - k.ao  ;
    return m;
}

int main()
{
    SOPHUC a(1,2), b(4,5);
    cout <<"So phuc 1 la: "<<a<<endl;
    cout <<"So phuc 2 la: "<<b<<endl;
    SOPHUC SP3 = a+b;
    SOPHUC SP4 = a-b;
    cout <<"TONG 2 SO PHUC : "<<SP3<<endl;
    cout <<"HIEU 2 SO PHUC : "<<SP4<<endl;

    ofstream FILE ("D:/sophuc.txt", ios::app);
    FILE <<"So phuc 1: "<<a<<endl;
    FILE <<"So phuc 2 : "<<b<<endl;
    FILE <<"TONG 2 SO PHUC : "<<SP3<<endl;
    FILE <<"HIEU 2 SO PHUC : "<<SP4<<endl;
    FILE.close();
}