#include<bits/stdc++.h>
using namespace std;
class PERSON
{
    protected:
    char Hoten[30];
    char Ngaysinh[15];
    char Quequan[50];
};

class KYSU :public PERSON
{
    char Nganh[20];
    int NamTN;
    public: 
    void NHAP();
    void XUAT();
    friend void IN(KYSU *k, int n);
};
void KYSU::NHAP()
{
    cout <<"Nhap ho ten ky su : "; fflush(stdin); gets(Hoten);
    cout <<"Nhap ngay sinh : "; fflush(stdin); gets(Ngaysinh);
    cout <<"Nhap Que quan  : "; fflush(stdin); gets(Quequan);
    cout <<"Nhap Nganh hoc : "; fflush(stdin); gets(Nganh);
    cout <<"Nhap nam TN    : "; cin>>NamTN;
}
void KYSU::XUAT()
{
    cout<<left<<setw(22) <<Hoten<<setw(15)<<Ngaysinh<<setw(22)<<Quequan<<setw(20)<<Nganh<<NamTN<<endl;
}

void IN(KYSU *k, int n)
{
   int max=k[0].NamTN; 
   for (int i=0; i<n ; i++)
   if(k[i].NamTN >max) 
   max=k[i].NamTN;

   cout <<"--Ky su tot nghiep gan day : "<<endl;
    cout<<left<<setw(22) <<"HO TEN"<<setw(15)<<"NGAY SINH"<<setw(22)<<"QUE QUAN"<<setw(20)<<"NGANH"<<"NAM TOT NGHIEP"<<endl;
   for (int i=0; i<n;i++)
   if(k[i].NamTN ==max) 
   k[i].XUAT();
}

int main ()
{
    KYSU *k;
    int n;
    cout <<"Nhap so ky su : "; cin >>n;
    k=new KYSU[n];
    for (int i=0; i<n; i++)
    {
        cout <<"Nhap thong tin ki su "<<i+1<<":"<<endl;
        k[i].NHAP();
    }
    cout <<"\t\t\t DANH SACH KY SU "<<endl;
    cout<<left<<setw(22) <<"HO TEN"<<setw(15)<<"NGAY SINH"<<setw(22)<<"QUE QUAN"<<setw(20)<<"NGANH"<<"NAM TOT NGHIEP"<<endl;
    for (int i=0; i<n; i++)
    k[i].XUAT();

    IN (k,n);


}