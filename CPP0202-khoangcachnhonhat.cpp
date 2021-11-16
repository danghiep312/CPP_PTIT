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

int n;
vi a;

void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve() {
    int minz = 10000;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            minz = min(abs(a[i] - a[j]), minz);
        }
    }
    cout << minz;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}