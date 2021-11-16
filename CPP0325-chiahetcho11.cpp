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

int result(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) sum += (s[i] - 48);
        else sum -= (s[i] - 48);
    }

    sum = abs(sum);
    if (sum % 11 == 0) return 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << result(s) << endl; 
    }
}