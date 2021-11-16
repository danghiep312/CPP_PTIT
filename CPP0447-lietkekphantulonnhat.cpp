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

priority_queue<int> a;
int n, k, num;

void init() {
    a = priority_queue<int> {};
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push(num);
    }
}

void solve() {
    while (k--) {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}