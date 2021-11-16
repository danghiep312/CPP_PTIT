#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name;
    string birth;
    double x, y, z, sum;
};

void nhap(ThiSinh &a) {
    getline(cin, a.name);
    cin >> a.birth;
    cin >> a.x >> a.y >> a.z;
    a.sum = a.x + a.y + a.z;
}

void in(ThiSinh a) {
    cout << a.name << " " << a.birth << " ";
    cout << setprecision(1) << fixed << a.sum;
}

int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}