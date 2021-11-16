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

priority_queue<int, vi, greater<int> > a;
int num, n, t;

void init() {
    a = priority_queue<int, vi, greater<int> > {};
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        a.push(num);
    }
}

void solve() {
    for (int i = 1; i < n; i++) {
        if (a.top() != i) cout << i << endl;
        else a.pop();
    }
}

int main() {
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}