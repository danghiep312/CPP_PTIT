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
int n, x, num;
void init() {
    dd.assign(1e6, 0);
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> num;
        dd[num]++;
    }
}

void solve() {
    if (dd[x] == 0) cout << -1 << endl;
    else cout << dd[x] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}