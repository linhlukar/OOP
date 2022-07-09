#include<bits/stdc++.h>
using namespace std;
class MANG
{
    float *a;
    int n ; 
    public: 
    MANG()
    {
        a=NULL; 
        n=0;
    }
    MANG(float *a, int n)
    {
        this->a=a;
        this->n=n;
    }
    friend istream & operator >>(istream &is, MANG &y);
    friend ostream & operator <<(ostream &os, MANG y);
    bool operator-- (); 
    bool operator*(MANG y);
};
istream & operator >> (istream & is, MANG &y)
{
    cout <<"Nhap so phan tu mang : "; is >>y.n; 
    y.a= new float [y.n];
    for (int i=0; i<y.n; i++)
    {
        cout <<"a["<<i+1<<"]="; 
        is>>y.a[i];
    }
    return is;
}
ostream & operator << (ostream &os, MANG y)
{
    for (int i=0; i<y.n; i++)
    os<<y.a[i]<<" ";
    return os;
}

bool MANG:: operator--()
{
        for(int i=0;i<n-1;i++)
        if(a[i] == a[i+1])
        return true;
        else return false;
}
bool MANG::operator*(MANG k)
{
    if(n==k.n)
        {
            int sum1=0, sum2=0;
            for (int i=0; i<n; i++)
            {
                sum1 += a[i];
                sum2 += k.a[i];
            }
            if(sum1==sum2)
            return true ;
        }
    else return false ;
}
int main ()
{
    MANG k, p;    
    ofstream FILE ("MANG.TXT", ios::out);
    cin>>k>>p;
    cout <<k<<endl;    FILE << k<<endl;
    cout <<p<<endl;    FILE << p<<endl;

    cout <<--k<<endl;   FILE <<"k : "<<--k<<endl;
    cout <<--p<<endl;   FILE <<"p : "<<--p<<endl;

    cout <<(k*p)<<endl;
    FILE <<(k*p)<<endl;

    FILE.close();

}