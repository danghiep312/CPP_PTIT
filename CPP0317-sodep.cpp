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

bool check(string s)
{
    string res;
    res = s;
    reverse(s.begin(), s.end());
    if (res == s)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] % 2)
            {
                return false;
            }
        }
        return true;
    }
    else return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}