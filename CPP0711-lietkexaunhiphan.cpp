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

int n;
void sinh(string a) {
    if (a.size() == n) {
        cout << a << " ";
        return;
    }
    else {
        sinh(a + "0");
        sinh(a + "1");
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        sinh("");
        cout << endl;
    }
}