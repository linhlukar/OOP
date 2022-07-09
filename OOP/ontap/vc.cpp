#include <bits/stdc++.h>
using namespace std;
class VECTOR
{
    float *a;
    int n;
public:
    VECTOR();
    VECTOR(float *b, int n);
    bool operator-(VECTOR b);
    float operator--();
    friend istream& operator>>(istream& x, VECTOR &y);
    friend ostream& operator<<(ostream& x, VECTOR y);
};
VECTOR::VECTOR()
{
    n = 0;
}
VECTOR::VECTOR(float *b, int n)
{
    a=new float[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
bool VECTOR::operator-(VECTOR b)
{
    if (n == b.n)
    {
        for (int i = 0; i < b.n; i++)
        {
            if (a[i] != b.a[i])
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
    return true;
}
float VECTOR::operator--()
{
    float maxx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (maxx < a[i])
        {
            maxx = a[i];
        }
    }
    return maxx;
}

istream& operator>>(istream& x, VECTOR &y)
{
    cout << "n: "; x >> y.n;
    y.a = new float[y.n];
    for (int i = 0; i < y.n; i++)
    {
        cout << "a[" << i << "]: "; x >> y.a[i];
    }
    return x;
}
ostream& operator<<(ostream& x, VECTOR y)
{
    for (int i = 0; i < y.n; i++)
    {
        x << y.a[i] << " ";
    }
    return x;
}

int main()
{
    VECTOR a1;
    VECTOR a2;
    cin >> a1;
    cin >> a2;
    if (a1-a2)
        cout << "2 vector trung nhau" << endl;
    else
        cout << "2 vector khong trung nhau" << endl;
    cout << "GTLN vector 1: " << --a1 << endl;
    cout << "GTLN vector 2: " << --a2 << endl;
    ofstream f("E:\BAI2.txt", ios::app);
    if (a1-a2)
        f<<"2 vector trung nhau" << endl;
    else
        f<<"2 vector khong trung nhau" << endl;

    f<<"GTLN vector 1: "<<--a1 << endl;
    f<<"GTLN vector 2: "<<--a2 << endl;
    f.close();
    return 0;
}