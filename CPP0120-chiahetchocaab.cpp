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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, m, n;
        cin >> m >> n >> a >> b;
        int res = 0;
        for (int i = m; i <= n; i++) {
            if (i % a == 0 || i % b == 0) res++;
        }
        cout << res << endl;
    }
}