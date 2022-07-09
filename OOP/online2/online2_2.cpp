#include<bits/stdc++.h>
using namespace std;
class STUDENT;
class FACULTY;
class PERSON
{
    protected:
    char Name[20];
    char Birth[10];
    char Address[50];
    public: 
    void NHAP();
    void XUAT();
    PERSON()
    {
        strcpy(Name, "");
        strcpy(Birth, "");
        strcpy(Address, "");
    }
};
void PERSON::NHAP()
{
    cout <<"Name : ";   fflush(stdin);   gets(Name);
    cout <<"Birth: ";   fflush(stdin);   gets(Birth);
    cout <<"Address: "; fflush(stdin);   gets(Address);
}
void PERSON::XUAT()
{
    cout <<"NAME   : " << Name   << endl;
    cout <<"BIRTH  : " << Birth  << endl;
    cout <<"ADDRESS: " << Address<< endl;
}
class SCHOOL
{
    char NameS[20];
    char DateS[10];
    friend class FACULTY;
    friend class STUDENT;
    friend void SUA( STUDENT &a);

};
class FACULTY
{
    char NameF[20];
    char DateF[15];
    SCHOOL x;
    public: 
    void NHAP();
    void XUAT();
    friend class STUDENT;
    friend void SUA( STUDENT &a);
};
void FACULTY::NHAP()
{
    cout <<"Faculty name : "; fflush(stdin); gets(NameF);
    cout <<"Faculty date : "; fflush(stdin); gets(DateF);
    cout <<"School name  : "; fflush(stdin); gets(x.NameS);
    cout <<"School date  : "; fflush(stdin); gets(x.DateS); 
}
void FACULTY::XUAT()
{
    cout <<"FACULTY NAME : "<<NameF<<endl;
    cout <<"FACULTY DATE : "<<DateF<<endl;
    cout <<"SCHOOL NAME  : "<<x.NameS<<endl;
    cout <<"SCHOOL DATE  : "<<x.DateS<<endl;   
}
class STUDENT : public PERSON
{
    FACULTY y;
    char Class[10];
    float score ;
    public: 
    void NHAP();
    void XUAT();
    STUDENT()
    {
        strcpy(y.NameF, "");
        strcpy(y.DateF,"");
        strcpy(y.x.NameS,"");
        strcpy(y.x.DateS,"");
        score=0;
    }
    friend void SUA( STUDENT &a);

};
void STUDENT::NHAP()
{
    PERSON ::NHAP();
    y.NHAP();
    cout <<"class name : "; fflush(stdin); gets(Class);
    cout <<"Score      : "; cin>>score;
}
void STUDENT ::XUAT()
{
    PERSON::XUAT();
    y.XUAT();
    cout <<"CLASS NAME : "<<Class<<endl;
    cout <<"SCORE  : "<<score<<endl;
}

void SUA( STUDENT &a)
{
    strcpy(a.y.x.NameS, "DHCNHN");
}

int main()
{
    STUDENT a;
    a.NHAP();
    cout <<"\t\tTHONG TIN SINH VIEN : "<<endl;
    a.XUAT();
    cout <<endl;
    cout <<"BONUS 1: "<<endl;
    SUA(a);
    a.XUAT();
}