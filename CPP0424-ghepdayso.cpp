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

int k, n;

void solve() {
    priority_queue<int, vi, greater<int> > a;
    cin >> k >> n;
    int num;
    for (int i = 0; i < k * n; i++) {
        cin >> num;
        a.push(num);
    }
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}