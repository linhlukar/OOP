#include<bits/stdc++.h>
using namespace std;

class MANG
{
    float *a; 
    int n;//kích thước nguyên
    public: 
    friend istream & operator >> (istream & is, MANG &k);
    friend ostream & operator << (ostream &os, MANG k);
    MANG operator++();//sx tăng
    MANG operator--();//sx giảm

};
istream & operator >> (istream & is, MANG &k)
{
    cout <<"n="; is>>k.n;
    k.a = new float[k.n];
    for (int i=0; i<k.n; i++)
    {
        cout <<"a["<<i+1<<"]=";
        is>>k.a[i];
    }
    return is;
}
ostream & operator << (ostream &os, MANG k)
{
    for (int i=0; i<k.n; i++)
    os<<k.a[i]<<" ";
    return os;
}

//Mảng tăng dần: 
MANG MANG::operator++()
{
    for ( int i=0; i<n; i++)
    for (int j=i+1; j<n; j++)
    if(a[i]>a[j])
    {
        float tmp =a[i];
              a[i]= a[j];
              a[j]=tmp;
    }
    return *this;
}

//Mảng giảm dần
MANG MANG::operator--()
{
    for (int i=0; i<n; i++)
    for (int j=i+1; j<n; j++)
    if(a[i]<a[j])
    {
        float tmp=a[i];
              a[i]=a[j];
              a[j]=tmp;
    }
    return *this;
}

int main ()
{
    MANG k;
    cout <<"Nhap phan tu mang : "; cin >>k;
    k=++k;
    cout <<"SAP XEP TANG : ";
    cout <<k<<endl;
    k=--k;
    cout <<"SAP XEP GIAM : "; 
    cout <<k<<endl;
    ofstream FILE ("C:/SQL2019/MANG.txt", ios::out);//app
    FILE <<"MANG : "<<k<<endl;
    FILE <<"SAP XEP TANG : "<<++k<<endl;
    FILE <<"SAP XEP GIAM : "<<--k<<endl;
    FILE.close();
}
