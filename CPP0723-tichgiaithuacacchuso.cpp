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

ll fac[10];

//1 = 1
// 2 = 2
// 3 = 3
// 4 = 2 2 3
// 5 = 5
// 6 = 3 5
// 7 = 7
// 8 = 2 2 2 7
// 9 = 2 3 3 7;

void solve()
{
    int n;
    string num;
    cin >> n >> num;
    string res;
    for (int i = 0; i < n; i++)
    {
        switch (num[i])
        {
        case '2':
            res += "2";
            break;
        case '3':
            res += "3";
            break;
        case '4':
            res += "223";
            break;
        case '5':
            res += "5";
            break;
        case '6':
            res += "35";
            break;
        case '7':
            res += "7";
            break;
        case '8':
            res += "2227";
            break;
        case '9':
            res += "2337";
            break;
        }
    }
    sort(res.rbegin(), res.rend());
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}