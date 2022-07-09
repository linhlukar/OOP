#include<bits/stdc++.h>
using namespace std;
class ARRAY
{
    int n; 
    float *a;
    public: 
    ARRAY ()
    {
        n=0; 
        a=NULL;
    }
    ~ARRAY(){};
    ARRAY(int x)
    {
        n=x; 
        a = new float [n];
        for (int i=0; i<n; i++)
        a[i]=0; 
    }

    friend istream & operator >>(istream &is, ARRAY &y);
    friend ostream & operator<< (ostream &os, ARRAY y);
    ARRAY operator-();
};

istream & operator >>(istream &is, ARRAY &y)
{
    cout <<"n="; is>>y.n;
    y.a = new float[y.n];
    for (int i=0; i<y.n; i++)
    {
        cout <<"a["<<i+1<<"]=";
        is>>y.a[i];
    }
    return is;
}

ostream & operator << (ostream &os, ARRAY y)
{
    for (int i=0; i<y.n; i++)
    os<<y.a[i]<<" ";
    return os;
}
//Phương thức toán tử đổi dấu của các phần tử lớn hơn 5 trong mảng.
//ARRAY ARRAY :: operator-()


int main ()
{
    ARRAY k;
    cout <<"Nhap phan tu MANG : "; cin>>k;
    cout <<k;
}
