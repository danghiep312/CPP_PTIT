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

vi a;
int n;

void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve() {
    sort (a.begin(), a.end());
    for (int i = 0; i < n / 2; i++) {
        cout << a[n - 1 - i] << " " << a[i] << " ";
    }
    if (n % 2) cout << a[n / 2];
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