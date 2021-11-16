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


vi a(1e6, 0);
void snt()
{ // sàng chay
    a[0] = a[1] = 1;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                a[j] = 1;
            }
        }
    }
}

void solve(int n) {
    for (int i = 2; i < n; i++) {
        if (a[i] == 0 && a[n - i] == 0) {
            cout << i << " " << n - i;
            return;
        }
    }
    cout << -1;
}

int main() {
    snt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}