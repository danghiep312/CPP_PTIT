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


int solve(string s, int k) {
    int dd[200] = {0};
    for (int i = 0; i < s.size(); i++) {
        dd[s[i]]++;
    }
    int count = 0;
    for (int i = 'a'; i <= 'z'; i++) {
        if (dd[i] > 0) count++;
    }
    //cout << count << " ";
    if (26 - count > k) return 0;
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        cout << solve(s, k) << endl;
    }
}