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
int n, t, k;

void init() {
    cin >> n >> k;
    k %= n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void process() {
    for (int i = k; i < n; i++) cout << a[i] << " ";
    for (int i = 0; i < k; i++) cout << a[i] << " ";
    

    cout << endl;
}

int main() {
    cin >> t;
    while (t--) {
        init();
        process();
    }
}