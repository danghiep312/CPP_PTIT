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

set<int> a;
int t, n, num;
void solve() {
    a.clear();
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.insert(num);
    }
    if (a.size() == 1) {
        cout << -1 << endl;
    }
    else {
        int count = 0;
        for (set<int>::iterator it = a.begin(); it != a.end() ; it++) {
            cout << *it << " ";
            count++;
            if (count == 2) break;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}