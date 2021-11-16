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

string process(string a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= 'Z' && a[i] >= 'A') {
            a[i] += 32;
        }
    }
    return a;
}

int main() {
    vector<string> res;
    string str, b;
    getline(cin, str);
    str = process(str);
    stringstream s (str);
    string word;
    while (s >> word) {
        res.push_back(word);
    }
    cout << res.back();
    for (int i = 0; i < res.size() - 1; i++) {
        cout << res[i][0];
    }
    cout << "@ptit.edu.vn";
}