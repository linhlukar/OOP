#include<bits/stdc++.h>
using namespace std;
class TAMGIAC
{
    float a,b,c;
    public: 
    TAMGIAC ()
    {
        a=b=c=0;
    }
    TAMGIAC(float x, float y, float z)
    {
        a=x; b=y; c=z;
    }
    friend istream & operator >>(istream & is, TAMGIAC &y);
    friend ostream & operator <<(ostream &os, TAMGIAC y);
    float operator++();
    TAMGIAC operator+(TAMGIAC k);
};
istream & operator >>(istream & is, TAMGIAC &y)
{
    cout <<"a="; is>>y.a;
    cout <<"b="; is>>y.b;
    cout <<"c="; is>>y.c;
}
ostream & operator <<(ostream &os, TAMGIAC y)
{
    os<<"a="<<y.a<<endl;
    os<<"b="<<y.b<<endl;
    os<<"c="<<y.c<<endl;
}
float TAMGIAC::operator++()
{
    return a+b+c;
}

TAMGIAC TAMGIAC:: operator+(TAMGIAC k)
{
    
}


int main()
{
    TAMGIAC P,Q(2,3,4);
    
}
