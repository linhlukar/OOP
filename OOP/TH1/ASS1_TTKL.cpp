#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class NCC
{
    private: 
    char id[20], nameNCC[20];
    char dc[30]; 
    char sdt[20];

    public: 
    void NHAP();
    void XUAT();
    friend class PHIEU;

};

void NCC::NHAP()
{
    cout <<"Nhap Ma nha cung cap      : ";fflush(stdin);  gets(id);
    cout <<"Nhap TEN nha cung cap     : "; fflush(stdin); gets(nameNCC);
    cout <<"Nhap dia chi nha cung cap : "; fflush (stdin); gets(dc);
    cout <<"Nhap So dien thoai        : "; fflush (stdin); gets(sdt);
}
void NCC:: XUAT()
{
    cout <<left<< setw(25) << "MA NHA CUNG CAP : "<< setw(35) << id <<setw(20)<< "TEN NHA CUNG CAP:"<<setw(20)<<nameNCC<<endl;
    cout <<left<< setw(25) << "DIA CHI         : "<< setw(35) << dc <<setw(20)<< "SDT             :"<<setw(20)<< sdt <<endl;

}

class SANPHAM
{
    private: 
    char maSP[10], tenSP[20];
    int soluong, dongia;
    int n;
    public: 
    SANPHAM (){};
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend void sapxep(PHIEU a);
    friend void Dem(PHIEU a);
};
void SANPHAM::NHAP()
{
    cout <<"Nhap ma san pham      : "; fflush(stdin); gets(maSP);
    cout <<"Nhap ten san pham     : "; fflush(stdin); gets(tenSP);
    cout <<"Nhap so luong san pham: "; cin >> soluong;
    cout <<"Nhap don gia san pham : "; cin >> dongia ;

}
void SANPHAM::XUAT()
{
    cout << left << setw(20) << maSP <<setw(20)<<tenSP 
    << setw(20)<<soluong<< setw(20)<<dongia<< setw(20) << dongia*soluong <<endl;
}

class PHIEU
{
    private:
    char maphieu[20];
    int d,m,y;
    NCC x;
    SANPHAM *k;
    int n;
    public:
    void NHAP();
    void XUAT();
    friend void sapxep(PHIEU a);
    friend void Dem(PHIEU a);
};
void PHIEU::NHAP()
{
    cout <<"Nhap MA PHIEU : "; 
    fflush(stdin); 
    gets(maphieu);
    cout <<"Nhap ngay thanh lap: "; 
    cin >> d >>m>>y;
    cout <<"- Nhap thong tin nha cung cap : "<<endl;
    x.NHAP();
    cout <<"Nhap so san pham : "; 
    cin >>n;
    k=new SANPHAM[n];
    for (int i = 0 ; i < n ; i++ )
    {
        cout <<"- Nhap thong tin san pham thu "<<i+1<<":"<<endl;
        k[i].NHAP();
    }
}
void PHIEU::XUAT()
{
    cout <<"Dai hoc Victory"<<endl;
    cout <<"\t\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
    cout <<left<< setw(25) << "MA PHIEU : "<< setw(35) << maphieu <<setw(20)<< "NGAY LAP : "<<d<<"/"<<m<<"/"<<y<<endl;
    x.XUAT();
    cout << left << setw(20) << "Ma SP" <<setw(20)<<"TEN SAN PHAM" 
         << setw(20)<<"SO LUONG"<< setw(20)<<"DON GIA"<< setw(20) << "THANH TIEN" <<endl;

    long long sumTT=0;
    for (int i = 0 ; i < n ; i++ )
    {
        k[i].XUAT();
        sumTT +=  k[i].soluong * k[i].dongia;
    }
    cout <<right<<setw(80)<<"TONG " << left<<setw(20)<<sumTT<<endl;


    cout <<left<<setw(25)<<"Hieu truong"<<setw(25)<<"Phong tai chinh"<<"Nguoi lap" <<endl;
}
//Có bao nhiêu sản phẩm có số lượng nhập nhỏ hơn 80 ?
void Dem(PHIEU a)
{

    int sum=0;
    for (int i=0; i<a.n; i++)
        if(a.k[i].soluong < 80)
            sum++;
            cout <<" so san pham co so luong < 80 : "<<sum <<endl;

}

//Sắp xếp ds tăng dần của đơn giá ?
void sapxep (PHIEU a)
{
    for (int i = 0;  i < a.n-1 ; i++)
    {
        for (int j=i+1; j < a.n ; j++)
        {
            if(a.k[i].dongia > a.k[j].dongia)
        
                swap(a.k[i],a.k[j]);
            
        }
    }

} 

int main ()
{
    PHIEU a;
    a.NHAP();
    cout <<endl;
    cout <<"\t\t\t\t------------------------------------"<<endl;
    a.XUAT();
    cout <<endl;
    cout <<"\t\t\t\t------------------------------------"<<endl;
    cout <<endl;
    Dem(a);
    cout <<endl;
    cout <<"Phieu sau khi sap xep lai "<<endl;
    cout <<endl;  
    sapxep(a);
    a.XUAT();
    cout <<endl;
    cout <<"\t\t\t\t------------------------------------"<<endl;


    return 0;
}



