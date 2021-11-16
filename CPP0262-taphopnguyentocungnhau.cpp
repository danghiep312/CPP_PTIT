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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll s = n * (n + 1) / 2;
        ll s1 = (s + m) / 2;
        ll s2 = s - s1;
        if (s1 - s2 != m || __gcd(s1, s2) != 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}