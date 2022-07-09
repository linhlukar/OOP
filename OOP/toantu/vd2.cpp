#include<bits/stdc++.h>
using namespace std;
class SINHVIEN
{
    char MSV[30];
    char HOTEN[30];
    int TUOI;
    public:
    friend istream& operator>>(istream& is, SINHVIEN &y);
    friend ostream& operator<<(ostream& os, SINHVIEN y);
};
istream& operator>>(istream& is, SINHVIEN &y)
{
    cout <<"Ma sinh vien : "; fflush(stdin); is.getline(y.MSV ,30);
    cout <<" HO TEN      : "; fflush(stdin); is.getline (y.HOTEN,30);
    cout <<"Tuoi  : ";  is>>y.TUOI; 
    return is;
}
ostream& operator<<(ostream& os, SINHVIEN y)
{
    os<<"MA SINH VIEN : "<<y.MSV<<endl;
    os<<"TEN          : "<<y.HOTEN<<endl;
    os<<"Tuoi         : "<<y.TUOI<<endl;
    return os;
}

int main ()
{
    int n ;
    cout <<"n="; cin >>n;
    SINHVIEN *k=new SINHVIEN [n];
    for (int i=0; i<n; i++)
    cin >>k[i];
    for (int i=0;i<n;i++)
    cout <<k[i]<<endl;

    ofstream FILE ("C:/SQL2019/BTH.TXT", ios::app);
    for (int i=0; i<n; i++)
    FILE <<k[i]<<endl;
    FILE.close();
}
