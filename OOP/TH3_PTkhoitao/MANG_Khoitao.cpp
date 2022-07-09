#include <bits/stdc++.h>
using namespace std;

class ARRAY
{
    int *value;
    int n ;
    public: 
    ARRAY()
    {
        n=0;
        value = NULL;
    }
    ~ARRAY()
    {
        n=0;
        value = NULL;
    }
    ARRAY(int x)
    {
        n=x; 
        value= new int [n];
        for (int i=0; i<n; i++)
        value [i]=0; 
    }
    void NHAP();
    void XUAT();
};

void ARRAY::NHAP()
{

    cout <<"n="; cin >>n;

    value = new int [n];
    for (int i=0; i<n ; i++)
    {
        cout <<"VALUE["<<i+1<<"] =";
        cin >>value[i];
    }
}

void ARRAY::XUAT()
{
    for ( int i=0; i<n; i++)
    cout <<value[i]<<" "; 
}

int main ()
{
    ARRAY a(10);
    cout <<"XUAT MANG : "; 
    a.XUAT();

    cout <<endl;
    cout <<"Nhap MANG moi : ";
    a.NHAP(); 
    cout <<"XUAT MANG : ";
    a.XUAT();

    return 0;
}