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
typedef pair<int, int> ii;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;
const long long nmax = 1e6;

ll f[100];

void init() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 100; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

void solve() {
    ll n, x;
    cin >> n;
    for (int i =  0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < 100; j++) {
            if (x == f[j]) {
                cout << x << " ";
                break;
            }
        }
    }
}

int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}