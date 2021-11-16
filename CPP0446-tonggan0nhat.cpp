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

struct cmp
{
    bool operator() (int a, int b){
        return abs(a) > abs(b);
    }
};


priority_queue<int, vi, cmp> p; 
int a[10000], n;

void init() {
    p = priority_queue<int, vi, cmp> {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve() {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            p.push(a[i] + a[j]);
        }
    }
    cout << p.top() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}