#include <bits/stdc++.h>

using namespace std;
class VECTOR
{
    float *a;
    int n;
public:
    VECTOR();
    VECTOR(float *b, int n);
    bool operator+(VECTOR b);
    float operator--();
    friend istream& operator>>(istream& x, VECTOR &y);
    friend ostream& operator<<(ostream& x, VECTOR y);
};

VECTOR::VECTOR()
{
    n = 0;
    a=NULL;
}
VECTOR::VECTOR(float *b, int n)
{
    a = new float[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

bool VECTOR::operator+(VECTOR b)
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
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

istream& operator>>(istream& x, VECTOR &y)
{
    cout << "n: "; x >> y.n;
    y.a = new float[y.n];
    for (int i = 0; i < y.n; i++)
    {
        cout << "a[" << i+1 << "]: "; 
        x >> y.a[i];
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
    VECTOR v1;
    VECTOR v2;
    cin >> v1;
    cin >> v2;
    ofstream f;
    f.open("VECTOR.txt");

    if (v1+v2)
        cout << "2 vector trung nhau " << endl;
    else
        cout << "2 vector khong trung nhau" << endl;
    

    if (v1+v2)
        f << "2 vector trung nhau" << endl;
    else
        f << "2 vector khong trung nhau" << endl;


    cout << "GTLN vector 1: " << --v1 << endl;     
    f << "GTLN vector 1: " << --v1 << endl;
    cout << "GTLN vector 2: " << --v2 << endl;     
    f << "GTLN vector 2: " << --v2 << endl;

    f.close();

    return 0;
}