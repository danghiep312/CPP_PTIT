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
typedef pair<int, int> ii;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;
const long long nmax = 1e6;

vi a, b;
int n;

void init()
{
    cin >> n;
    a.resize(n + 1);
    a[0] = 0;
    b.resize(n + 1);
    b[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }
}

void solve()
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[i] - a[j - 1] == b[i] - b[j - 1])
            {
                res = max(res, i - j + 1);
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
    }
}