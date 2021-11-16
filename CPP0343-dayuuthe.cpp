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

string str, word;
int odd, even;
void solve() {
    int count = 0;
    getline(cin, str);
    odd = even;
    stringstream s(str);
    while (s >> word) {
        if (word.back() % 2) odd++;
        else even++;
        count++;
    }

    if (count % 2 == 0 && even > odd) {
        cout << "YES";
        return;
    }
    if (count % 2 == 1 && odd > even) {
        cout << "YES";
        return;
    }
    cout << "NO";
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
        cout << endl;
    }
}