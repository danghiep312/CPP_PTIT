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

int t;
int n;
string num;

vi dd;

void process(string a) {
    for (int i = 0; i < a.size(); i++) {
        dd[a[i] - 48]++;
    }
}

void solve() {
    dd.assign(10, 0);
    cin >> n;
    while (n--) {
        cin >> num;
        process(num);
    }
    for (int i = 0; i < 10; i++) {
        if (dd[i] != 0) cout << i << " ";
    }
    cout << endl;
}

int main() {
    cin >> t;
    while (t--) {
        solve();
    }
}