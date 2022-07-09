#include <bits/stdc++.h>
using namespace std;

class MANG{
private:
    int* VALUE;
    int n;
    friend istream& operator>>(istream& x, MANG &y);
    friend ostream& operator<<(ostream& x, MANG y);
public:
    MANG(){
        VALUE = NULL;
        n = 0;
    }
    MANG(int* VALUE, int n){
        this->VALUE = VALUE;
        this->n = n;
    }
    bool operator++(){
        for(int i=0;i<n-1;i++){
            if(VALUE[i] != VALUE[i+1]) 
                return false;
        }
        return true;
    }
    bool operator-(MANG q)
    {
        if(n == q.n){
            int sum1 = 0, sum2 = 0;
            for(int i=0;i<n;i++){
                sum1 += VALUE[i];
                sum2 += q.VALUE[i];
            }
            if(sum1 == sum2){
                return true;
            }
        }
        return false;
    }
};

istream& operator>>(istream& x, MANG &y){
    cout<<"n = "; x>>y.n;
    y.VALUE = new int[y.n];

    for(int i=0;i<y.n;i++){
        x>>y.VALUE[i];
    }
    cout<<endl;

    return x;
}

ostream& operator<<(ostream& x, MANG y){
    for(int i=0;i<y.n;i++){
        x<<y.VALUE[i]<<" ";
    }
    x<<endl;

    return x;
}

int main(){
    MANG arr1, arr2;
    fstream file("ARRAY.txt", ios::out);

    cin>>arr1>>arr2;
    cout<<arr1<<arr2;
    file<<arr1<<arr2;

    cout<<(++arr1)<<endl; file<<(++arr1)<<endl;
    cout<<(++arr2)<<endl; file<<(++arr2)<<endl;

    cout<<(arr1-arr2)<<endl;
    file<<(arr1-arr2)<<endl;

    file.close();

    return 0;
}