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

ll pow(ll n, ll k, ll mod) {
    if (k == 0) return 1;
    ll tmp = pow(n, k / 2, mod);
    if (k % 2 == 0) return (tmp  * tmp) % mod;
    else return ((tmp * tmp) % mod * n ) % mod;
}

int main() {
    faster();
    int t;
    cin >> t;
    while (t--) {
        ll n, k, mod;
        cin >> n >> k >> mod;
        cout << pow(n, k, mod) << endl;
    }
}