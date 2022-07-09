#include<bits/stdc++.h>
using namespace std;
class NHITHUC
{
    float a, b;
    public: 
    NHITHUC()
    {
        a=b=0;
    }
    ~NHITHUC ()
    {
        a=b=0;
    }
    NHITHUC(float a, float b)
    {
        this->a=a;
        this->b=b;
    }
    NHITHUC operator-();
    friend istream& operator>>(istream &is, NHITHUC &y);
    friend ostream& operator <<(ostream&os, NHITHUC y);

};
istream & operator >> (istream &is, NHITHUC &y)
{
    cout <<"a="; is>>y.a;
    cout <<"b="; is>>y.b;
}
ostream & operator << (ostream & os, NHITHUC y)
{
    os<<y.a<<"x+"<<y.b<<endl;
}
int main ()
{
    
}