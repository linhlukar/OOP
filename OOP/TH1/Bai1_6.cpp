#include<bits/stdc++.h>
using namespace std;
class MANG
{
    private:
    float *a;
    int n;

    public:
    void NHAP();
    void XUAT();
    float MIN();
    float MAX();

};
void MANG::NHAP()
{
    cout <<"n = "; cin >> n;
    a = new float[n];
    for ( int i = 0; i<n ; i++)
    {
    cout <<"a["<<i+1<<"]="; 
    cin >>a[i];        
    }
}

void MANG::XUAT()
{
    for (int i=0; i<n; i++)
    cout << a[i]<<endl;
}
float MANG::MIN()
{
    float Min=a[0];
    for (int i=0; i<n; i++)
    if ( a[i] < Min ) 
    Min =a[i];
    return Min;
}

float MANG::MAX()
{
    float Max=a[0];
    for (int i=0; i<n; i++)
    if (a[i] > Max) 
    Max = a[i];
    return Max;
}

int main ()
{
    MANG x;
    x.NHAP();
    cout <<endl;
    x.XUAT();
    cout <<"Phan tu lon nhat : "<< x.MAX()<<endl;
    cout <<"Phan tu nho nhat : "<< x.MIN()<<endl;
    return 0;
}