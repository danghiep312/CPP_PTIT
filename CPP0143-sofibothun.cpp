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

vll fibo;

void init() {
    fibo.push_back(0);
    fibo.push_back(1);
    for (int i = 2; i < 100; i++) {
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);
    }
}

int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
}