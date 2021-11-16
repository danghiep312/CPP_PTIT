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
const int oo = 1e6 + 1;
vi dd;
void solve() {
    bool tick = true;
    int n, num, res = -1;
    dd.assign(1e6, 0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (dd[num] != 0 && tick) {
            tick = false;
            res = num;
        }
        dd[num]++;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
