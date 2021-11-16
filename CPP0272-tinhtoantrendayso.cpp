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

ll pow(ll n, ll k)
{
    if (k == 1)
        return n;
    ll tmp = pow(n, k / 2);
    if (k % 2 == 0)
    {
        return (tmp % MOD * tmp % MOD) % MOD;
    }
    return (tmp % MOD * tmp % MOD * n) % MOD;
}

ll nhan(ll n, ll k)
{
    if (k == 1)
        return n;
    if (k == 0)
        return 0;
    if (k % 2 == 1)
    {
        return (nhan(n, k - 1) % MOD + n % MOD) % MOD;
    }
    ll tmp = nhan(n, k / 2);
    return (tmp % MOD * tmp % MOD) % MOD;
}

void solve()
{
    ll mul = 1;
    ll n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mul = (mul % MOD * a[i]) % MOD;
    }
    if (mul == 0) {
        cout << 0;
        return;
    }
    ll l = a[0];
    for (int i = 1; i < n; i++)
    {
        l = __gcd(l, a[i]);
    }

    cout << pow(mul, l);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}