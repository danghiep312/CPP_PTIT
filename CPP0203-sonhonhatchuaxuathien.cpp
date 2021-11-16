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
    int tmp;
    cin >> n;
    a.assign(1e6, 0);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp >= 0) a[tmp] = 1;
    }
    for (int i = 1; i < 1e6; i++) {
        if (a[i] == 0) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
    }
}