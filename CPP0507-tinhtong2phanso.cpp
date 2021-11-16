#include <bits/stdc++.h>

using namespace std;
typedef double db;
typedef long long ll;


struct PhanSo
{
    ll tu, mau;
};

struct PhanSo rutgon(PhanSo a)
{
    ll tmp = __gcd(a.mau, a.tu);
    a.tu /= tmp;
    a.mau /= tmp;
    return a;
}

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

struct PhanSo tong(PhanSo a, PhanSo b)
{
    struct PhanSo c;
    c.mau = a.mau * b.mau;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c = rutgon(c);
    return c;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}