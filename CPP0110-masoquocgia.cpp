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


string solve(string s) {
    vi dd(s.size(), 0);
    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4') {
            dd[i] = dd[i + 1] = dd[i + 2] = 1;
        }
    }
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (dd[i] == 0) res += s[i];
    }
    return res;
}

int main() {
    string s;
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        s = solve(s);
        cout << s << endl;
    }
}