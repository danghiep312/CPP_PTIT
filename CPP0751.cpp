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

int result(int x, int b[], int m, int dd[]) {
    if (x == 0) return 0;
    if (x == 1) return dd[0];
    int pos = upper_bound(b, b + m, x) - b;
    int tmp = m - pos;
    tmp += (dd[0] + dd[1]);

    if (x == 2) tmp -= (dd[3] + dd[4]);
    if (x == 3) tmp += dd[2];
    return tmp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], dd[5] = {0}, res = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            if (b[i] < 5) dd[b[i]]++;
        }
        sort(b, b + m);
        for (int i = 0; i < n; i++) {
            res += result(a[i], b, m, dd);
        }
        cout << res << endl;
    }
}