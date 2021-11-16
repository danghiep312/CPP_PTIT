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

priority_queue<int> p;

void init() {
    int n, num;
    cin >> n;
    while (n--) {
        cin >> num;
        p.push(num);
    }
}

void solve() {
    int res = 1000000;
    int a, b;
    a = p.top();
    p.pop();
    while (!p.empty()) {
        b = p.top();
        res = min(res, abs(a - b));
        a = b;
        p.pop();
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}