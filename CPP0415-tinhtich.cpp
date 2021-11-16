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

int n, m;

void nhap(vi &a, int size) {
    int num;
    for (int i = 0; i < size; i++) {
        cin >> num;
        a.push_back(num);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vi a, b;
        nhap(a, n);
        nhap(b, m);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << (ll) a.back() * b[0] << endl;
    }
}