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

string solve(string s, ll x, ll y) {
    string res;
    ll num = __gcd(x, y);
    while (num--) {
        res += s;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll x, y;
        cin >> s >> x >> y;
        cout << solve(s, x, y) << endl;
    }
}