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
typedef pair<int, int> ii;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;
const long long nmax = 1e6;

int a[10005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n * n; i++) {
            cin >> a[i];
        }
        sort(a, a + n * n);
        // for (int i = 0; i < n * n; i++) {
        //     cout << a[i] << " ";
        // }
        cout << a[k - 1] << endl;
    }
}