#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s[s.size() - 1] == '6' && s[s.size() - 2] == '8') return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (check(s)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}