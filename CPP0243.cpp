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
        int n, m, x;
        cin >> n >> m;
        vector<int> a(n), b(m), c;
        map<int, int> d;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            d[a[i]]++;
        }
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++)
        {
            int k = d[b[i]];
            for (int j = 0; j < k; j++)
            {
                c.push_back(b[i]);
                d[b[i]]--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (d[a[i]] != 0)
                c.push_back(a[i]);
        }
        for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    }
}