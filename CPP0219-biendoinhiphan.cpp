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

int a[200][200];
int b[200][200] = {0};
int n, m, t;

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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            if (a[i][j]) {
                for (int k = 0; k < n; k++) {
                    b[k][j] = 1;
                    b[i][k] = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}