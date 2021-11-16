#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;

struct PhanSo
{
    ll ts, ms;
};

void nhap(PhanSo &a) {
    cin >> a.ts >> a.ms;
}

void rutgon(PhanSo &a) {
    ll tmp = __gcd(a.ts, a.ms);
    a.ts /= tmp;
    a.ms /= tmp;
}

void in(PhanSo a) {
    cout << a.ts << "/" << a.ms;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}