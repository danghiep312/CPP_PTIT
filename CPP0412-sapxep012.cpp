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
    a.clear();
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a.begin(), a.end());
}

void solve() {
    for (int it: a) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        init();
        solve();
    }
}