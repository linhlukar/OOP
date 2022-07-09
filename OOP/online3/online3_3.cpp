#include<bits/stdc++.h>
using namespace std;
class MATRAN
{
    int n,m; 
    double **a;
    public: 
    friend istream & operator>>(istream &is, MATRAN &y);
    friend ostream & operator <<(ostream &os, MATRAN y);
    MATRAN operator++();
};
 istream & operator>>(istream &is, MATRAN &y)
{
    cout <<"So dong: "; is>>y.n;
    cout <<"So cot : "; is>>y.m;
    y.a= new double *[y.n];
    for (int i=0; i<y.n; i++)
        y.a[i]=new double [y.m];
    for(int i=0; i<y.n; i++)
    for (int j=0; j<y.m;j++)
    {
        cout <<"A["<<i+1<<"]["<<j+1<<"]=";
        is>>y.a[i][j];
    }
    return is;
}
ostream & operator <<(ostream &os, MATRAN y)
{
    for(int i=0; i<y.n; i++)
    {
        for (int j=0; j<y.m; j++)
        os<<y.a[i][j]<< " ";
        cout <<endl;
    }
    return os;
}
MATRAN MATRAN:: operator++()
{
    MATRAN y;
    y.n=m;
    y.m=n;
    y.a = new double *[y.n];
    for(int i=0; i<y.n; i++)
       y.a[i]= new double [y.m];

    for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        y.a[i][j]= a[j][i];
       
    return y;

}
int main()
{
    MATRAN P;
    cin>>P;
    cout <<P;
    cout <<endl;
    cout <<++P;

}

//main Nhập vào từ bàn phím một ma trận kiểu thực (double) và một ma trận kiểu nguyên (long). ??????