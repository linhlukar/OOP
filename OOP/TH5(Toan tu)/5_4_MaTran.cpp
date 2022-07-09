#include<bits/stdc++.h>
using namespace std;
class MATRAN
{
    int n,m;
    double **a;
    public: 
    friend istream & operator>>(istream &is, MATRAN &y);
    friend ostream & operator <<(ostream &os, MATRAN y);
    MATRAN operator-();//đổi dấu
    MATRAN operator+(MATRAN y);
    MATRAN operator-(MATRAN y);
};
istream & operator>>(istream &is, MATRAN &y)
{
    cout <<"So hang: "; is>>y.n;
    cout <<"So cot : "; is>>y.m;
    y.a= new double *[y.n];
    for (int i=0; i<y.n; i++)
    y.a[i]=new double [y.m];
    for(int i=0; i<y.n; i++)
    for (int j=0; j<y.m;j++)
    {
        cout <<"A["<<i+1<<"]["<<j+1<<"]";
        is>>y.a[i][j];
    }
    return is;
}
ostream & operator <<(ostream &os, MATRAN y)
{
    for(int i=0; i<y.n; i++)
    {
        for (int j=0; j<y.m; j++)
        os<<left<<setw(5)<<y.a[i][j];
        cout <<endl;
    }
    return os;
}
//Đổi dấu Ma trận 
MATRAN MATRAN::operator-()
{
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    a[i][j]= -a[i][j];

    return *this;
}
MATRAN MATRAN::operator+(MATRAN y)
{
    MATRAN k;
    if( n==y.n && m==y.m)
    {
        k.n=n;
        k.m=m;
        k.a = new double *[n];
        for ( int i=0; i<n; i++)
        k.a[i]= new double [m];
        for (int i=0; i<n; i++)
         for (int j=0; j<m; j++)
         k.a[i][j]= a[i][j] + y.a[i][j];
    }
    else 
    {
        cout <<"Hai ma tran khac kich thuoc nhau !!"<<endl;
    }
    return k;
}

MATRAN MATRAN::operator-(MATRAN y)
{
    MATRAN k;
    if( n==y.n && m==y.m)
    {
        k.n=n;
        k.m=m;
        k.a = new double *[n];
        for ( int i=0; i<n; i++)
        k.a[i]= new double [m];
        for (int i=0; i<n; i++)
         for (int j=0; j<m; j++)
         k.a[i][j]= a[i][j] - y.a[i][j];
    }
    else 
    {
        cout <<"Hai ma tran khac kich thuoc nhau !!"<<endl;
    }
    return k;
}

int main()
{
    MATRAN P,Q;
    cout <<"nHAP MA TRAN P : "; cin>>P;
    cout <<"Nhap ma tran Q : "; cin>>Q;
    cout <<"MA TRAN P : "<<endl;
    cout<<P;
    cout <<"MA TRAN Q : "<<endl;
    cout <<Q; 

    cout <<endl;
    P=-P; 
    cout <<" DOI DAU MA TRAN P:  "<<endl;
    cout <<P;
    Q=-Q;
    cout <<" DOI DAU MA TRAN Q:  "<<endl;
    cout <<Q;

    MATRAN TONG=P+Q;
    cout <<"TONG P + Q "<<endl;
    cout <<TONG<<endl;
    MATRAN HIEU =Q-P;
    cout <<"HIEU P - Q : "<<endl;
    cout <<HIEU<<endl;
//Lưu file: 
    ofstream FILE ("C:/SQL2019/BTH.TXT", ios::out);    
    FILE <<"MA TRAN P : "<<endl;
    FILE<<P;
    FILE<<endl;
    FILE <<"MA TRAN Q : "<<endl;
    FILE <<Q;
    FILE<<endl; 
    FILE <<" DOI DAU MA TRAN P:  "<<-P;
    FILE<<endl;
    FILE <<" DOI DAU MA TRAN Q:  "<<-Q;
    FILE<<endl;
    FILE <<"TONG P + Q :"<<TONG;
    FILE<<endl;
    FILE <<"HIEU P - Q : "<<HIEU;
    FILE<<endl;
    FILE.close();

}







//con trỏ động **a
/* cấp phát cho Mảng 2 chiều: 
float **a;
a=new float* [n];
for (int i=0; i<n; i++)
a[i]= new float [m]
*/