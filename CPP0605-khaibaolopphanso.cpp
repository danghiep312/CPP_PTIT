#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
public:
    int tu, mau;

    PhanSo(int x, int y)
    {
        this->tu = x;
        this->mau = y;
    }
    friend istream &operator>>(istream &in, PhanSo &ps);
    friend ostream &operator<<(ostream &out, const PhanSo &ps);
    void rutgon()
    {
        
        int c = __gcd(tu, mau);
        //cout << tu << " " << mau << " " << c << endl;
        tu /= c;
        mau /= c;
    }
};

istream &operator>>(istream &in, PhanSo &ps)
{
    in >> ps.tu;
    in >> ps.mau;
    return in;
}

ostream &operator<<(ostream &out, const PhanSo &ps)
{
    if (ps.tu == 0)
        out << 0;
    else if (ps.mau == 1)
        out << ps.tu;
    else
        out << ps.tu << '/' << ps.mau;
    return out;
}


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}