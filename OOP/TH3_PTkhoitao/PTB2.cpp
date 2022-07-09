#include<bits/stdc++.h>
using namespace std;

class PTB2
{
    float a,b,c;
    public: 
    void NHAP();
    void XUAT();
    void GIAI();

    PTB2()
    {
        a=b=c=0;
    }
    
    PTB2 (float x, float y, float z)
    {
        a=x;
        b=y;
        c=z;
    }
};

void PTB2::NHAP()
{
    cout <<"a="; cin >>a;
    cout <<"b="; cin >>b;
    cout <<"c="; cin >>c;
}

void PTB2 ::XUAT()
{
    cout <<a<<"x"<<(char)253<<"+"<<b<<"x+"<<c<<"=0"<<endl;
}

void PTB2::GIAI()
{
    if (a==0)
    {
        cout <<"Day khong phai phuong trinh bac hai ! "<< endl;
    }

    else 
    {
        double delta = b*b-4*a*c;
        if ( delta <0 )
        {
            cout <<"Phuong trinh vo nghiem ! ";
        }
        else
        {
            cout <<"Nghiem cua phuong trinh la: "<<endl;
            cout <<"x1= "<<(-b-sqrt(delta))/(2*a) <<endl;
            cout <<"x2= "<<(-b+sqrt(delta))/(2*a)<<endl;
        }
    }
}



int main ()
{
    PTB2 P(2,3,5);
    cout <<"Phuong trinh P : ";
    P.XUAT();   
    P.GIAI();
    cout <<endl;

    PTB2 Q;
    cout <<"Nhap cac he so cua pt Q: "<<endl;
    Q.NHAP();
    cout <<"Phuong trinh Q: ";
    Q.XUAT();
    Q.GIAI();
    return 0;
}