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

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') s[i] += 32;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'y') {
            continue;
        }
        else cout << "." << s[i];
    }
}