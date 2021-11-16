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
typedef pair<int, int> ii;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;
const long long nmax = 1e6;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, res = 0;
        cin >> n >> m;
        vector<vector<int> > a (n, vector<int> (m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (i > 0)
                    if (a[i][j] == 1) {
                        a[i][j] = a[i - 1][j] + 1;
                    }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            sort(a[i].begin(), a[i].end());
            stack<int> b, c;
            int l[m], r[m];
            for (int j = 0; j < m; j++)
            {
                while (!b.empty() && a[i][j] <= a[i][b.top()])
                    b.pop();
                if (b.empty())
                    l[j] = 0;
                else
                    l[j] = b.top() + 1;
                b.push(j);
            }
            for (int j = m - 1; j >= 0; j--)
            {
                while (!c.empty() && a[i][j] <= a[i][c.top()])
                    c.pop();
                if (c.empty())
                    r[j] = m - 1;
                else
                    r[j] = c.top() - 1;
                c.push(j);
            }
            for (int j = 0; j < m; j++)
                res = max(res, (r[j] - l[j] + 1) * a[i][j]);
        }
        cout << res << endl;
    }
}