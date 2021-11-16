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

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i < n; i++) {
        if (__gcd(i, n) == 1) dem++;
    }
    if (isPrime(dem)) cout << 1;
    else cout << 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}