#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;

int num, n, t, x;

void solve()
{
    bool flag = true;
    int res = -1;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == x && res == -1) {
            res = i + 1;
        }
    }
    cout << res << endl;
}

int main()
{
    cin >> t;
    while (t--)
    {
        solve();
    }
}