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

int a[105][105], n, m;

void init()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}


void solve()
{
    int b[105][105] = {};
    for (int i = n - 1; i >= n / 2; i--)
    {
        for (int j = n - i; j <= i; j++)
        {
            b[n - i - 1][j] = a[n - i - 1][j - 1];
            b[i][j - 1] = a[i][j];
            b[j][i] = a[j - 1][i];
            b[j - 1][n - i - 1] = a[j][n - i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == 0)
                cout << a[i][j] << " ";
            else
                cout << b[i][j] << " ";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}