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

ll LCM(ll a, ll b) {
    ll tmp = __gcd(a, b);
    return a / tmp * b;
}

ll result(ll n) {
    ll res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = LCM(i, res);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << result(n) << endl;
    }
}