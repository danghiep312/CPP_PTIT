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

int n, l, r, q;
vi a;

void init() {
    cin >> n >> q;
    a.resize(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
}

void solve() {
    while (q--) {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}