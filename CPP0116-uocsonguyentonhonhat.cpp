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

vi dd(1e4, 0);

void snt() {
    dd[0] = dd[1] = 1;
    for (int i = 2; i <= 1e4; i++) {
        if (dd[i] == 0) {
            for (int j = i * i; j <= 1e4; j += i) {
                dd[j] = 1;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= i; j++) {
            if (dd[j] == 0 && i % j == 0) {
                cout << j << " ";
                break;
            }
        }
    }
}

int main() {
    snt();
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}