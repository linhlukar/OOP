#include<bits/stdc++.h>
using namespace std;

class HCN
{
    private :
    float D,R;
    public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();

};
void HCN::NHAP()
{
    cout <<"Nhap chieu dai hinh chu nhat : "; cin >>D;
    cout <<"Nhap chieu rong hinh chu nhat: "; cin >>R;
}
void HCN::VE()
{
    for (int i=0; i<R; i++)
    {
        for (int j=0; j<D;j++)
        cout <<"*";
        cout <<endl;
    }
}
float HCN::DIENTICH()
{
    return D*R;
}
float HCN::CHUVI()
{
    return (D+R)*2;
}
int main ()
{
    HCN x;
    x.NHAP();
    x.VE();
    cout <<endl;
    cout <<"Dien tich HCN la: "<<x.DIENTICH();
    cout <<endl;
    cout <<"Chu vi HCN la   : "<<x.CHUVI();
    return 0;
}