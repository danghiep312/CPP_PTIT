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
    int dd[1001] = {0};
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        dd[num]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (dd[i] > 0) cout << i << " ";
    }
}