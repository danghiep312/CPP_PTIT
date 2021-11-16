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
int n, l, r;

void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

bool solve(int l, int r) {
    bool check = true;
    for (int i = l; i < r; i++) {
        if (check) {
            if (a[i + 1] < a[i]) {
                check = false;
            }
        }
        else {
            if (a[i + 1] > a[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        cin >> l >> r;
        if (solve(l, r)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}