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
vi dd;
void solve() {
    dd.assign(1e6, 0);
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        dd[num]++;
    }
    int res = 0;
    for (int i = 0; i <= 1e6; i++) {
        if (dd[i] > 1) res += dd[i]; 
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