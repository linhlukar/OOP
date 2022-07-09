#include <bits/stdc++.h>
using namespace std;

class MANG 
{
   private:
   int *a;
   int n ;
   public:
   void NHAP();
   void XUAT();
   void SAP();

};

void MANG::NHAP() 
{ 
   cout <<"n="; cin >> n;
   a=new int [n];
   for (int i=0; i<n ; i++)
   {
      cout <<"a["<<i+1<<"]=";
      cin >> a[i];
   }
} 

void MANG::XUAT() 
{ 
   for (int i=0;i<n; i++)
   cout <<a[i]<<"  "; 
} 

void MANG::SAP() 
{ 
   for (int i=0; i<n; i++)
   {
      for (int j=i+1; j<n;j++)
         if( a[i] > a[j] )
         {
            int hihi=a[i];
               a[i]=a[j];
               a[j]=hihi;
         }
   }
} 
int main() 
{ 
 MANG x; 
 x.NHAP(); 
 x.SAP(); 
 x.XUAT(); 
 return 0; 
} 


