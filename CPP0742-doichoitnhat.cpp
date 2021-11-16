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

vi a;
int n;

void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
}

void solve() {
    pair<int, int> point[n];
    for (int i = 0; i < n; i++) {
        point[i].first = a[i];
        point[i].second = i;
    }

    sort(point, point + n);
    int res = 0;

    int vis[n] = {0};

    for (int i = 0; i < n; i++) {
        if (vis[i] || point[i].second == i) continue;

        int size = 0;
        int j = i;
        while (!vis[j]) {
            vis[j] = 1;
            j = point[j].second;
            size++;
        }

        if (size > 0) {
            res += (size - 1);
        }
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