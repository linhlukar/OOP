#include <bits/stdc++.h>
using namespace std ;
class PHANSO 
{
    float ts, ms;
    public: 
    void NHAP();
    void XUAT();
    PHANSO operator+(PHANSO q);
    PHANSO operator- ();
    float operator++ ();
};

void PHANSO ::NHAP()
{
    cout <<" TU ="; cin >>ts;
    cout <<"MAU ="; cin >>ms;

}
void PHANSO::XUAT()
{
    cout <<"a/b = "<<ts << "/"<<ms<<endl;
}

PHANSO PHANSO::operator+(PHANSO q)
{
    PHANSO k;
    k.ts= ts*q.ms + ms*q.ts;
    k.ms=ms*q.ms;
    return k;
}

PHANSO PHANSO::operator-()
{
    ts=-ts;
    ms=ms;
    return *this;
}
//rút gọn 
float PHANSO :: operator++ ()
{
    return ts/ms;
}

int main ()
{
    PHANSO P, Q;
    P.NHAP();
    Q.NHAP();

    PHANSO K;
    K=P+Q;
    K.XUAT();
    K=-K;
    K.XUAT();
    cout <<++K;


    return 0;
}