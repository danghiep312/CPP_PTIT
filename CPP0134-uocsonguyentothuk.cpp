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

int result(int n, int k) {
    int count = 0;
    for (int i = 2; i <= sqrt (n); i++) {
        while (n % i == 0) {
            count++;
            n /= i;
            if (count == k) return i;
        }
    }
    if (n > 1 && count == k - 1) return n;
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << result(n, k) << endl;
    }
}