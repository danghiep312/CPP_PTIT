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

string a = "ABBADCCABDCCABD";
string b = "ACCABCDDBBCDDBB";

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n;
        cin >> n;
        for (int i = 0; i < 15; i++) {
            cin >> s[i];
        }
        string tmp;
        if (n == 101) tmp = a;
        else tmp = b;
        
        int count = 0;
        for (int i = 0; i < 15; i++) {
            if (s[i] == tmp[i]) count++;
        }

        float score = (float) count * 10 / 15;
        cout << setprecision(2) << fixed << score << endl;
    }
}