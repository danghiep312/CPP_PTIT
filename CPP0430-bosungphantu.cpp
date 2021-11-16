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

int t, n, num;
set<int> a;
void solve()
{
    int first = 1000000, last = -1;
    cin >> n;
    a.clear();
    while (n--)
    {
        cin >> num;
        first = min(num, first);
        last = max(num, last);
        a.insert(num);
    }
    cout << last - first + 1 - a.size();    
}

int main()
{
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}