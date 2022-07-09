#include <bits/stdc++.h>

using namespace std;
class MANG
{
    int *a;
    int n;
public:
    MANG ()
    {
        a=NULL;
        n=0;
    }
    MANG (int *a, int n)
    {
        this->a = a;
        this->n = n;
    }
    ~MANG ()
    {
        a=NULL;
        n=0;
    }
    friend istream &operator >> (istream &is, MANG &x);//pt nhập mảng
    friend ostream &operator << (ostream &os, MANG x);//phương thức xuất
    MANG operator -- ();//phương thức đổi dấu 
    double operator++();//phương thức trả về TBC
};
istream &operator >> (istream &is, MANG &x)
{
   cout<<"n ="; is>> x.n;
    x.a = new int[x.n];
    for(int i=0; i<x.n; i++)
    {
        cout<<"a["<<i+1<<"]=";
        cin>>x.a[i];
    } 
    return is;
}
ostream &operator << (ostream &os, MANG x)
{
    for(int i=0; i<x.n; i++)
        os<<x.a[i]<<" ";
    return os;
}
MANG MANG::operator+(MANG q)
{

    MANG k;
    if(n == q.n)
    {
        k.n = n;
        k.a = new int[n];
        for(int i=0; i<n; i++)
            k.a[i] = a[i] + q.a[i];
    }
    else
    {
        k.n = 0;
        k.a = NULL;
    }
    return k;
}

/*
double MANG::operator++()
{
    float M = a[0];
    for(int i=0; i<n; i++)
        if(a[i]>M) M = a[i];
    return M;
}
MANG MANG::operator+(MANG q)
{

    MANG k;
    if(n == q.n)
    {
        k.n = n;
        k.a = new int[n];
        for(int i=0; i<n; i++)
            k.a[i] = a[i] + q.a[i];
    }
    else
    {
        k.n = 0;
        k.a = NULL;
    }
    return k;
}


void MANG::nhap()
{
    cout<<"n="; cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void MANG::xuat()
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}


int main()
{
    MANG P, Q;
    P.nhap(); Q.nhap();
    P.xuat(); Q.xuat();
    MANG K = P+Q;
    K.xuat();
    cout<<"MAX = "<<++K;
}
*/