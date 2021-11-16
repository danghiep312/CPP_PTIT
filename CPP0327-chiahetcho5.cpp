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

int t;
string s;

bool solve(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            int tmp = s.size() - 1 - i;
            if (tmp % 4 == 0)
                sum += 1;
            if (tmp % 4 == 1)
                sum += 2;
            if (tmp % 4 == 2)
                sum += 4;
            if (tmp % 4 == 3)
                sum += 3;
        }
    }
    if (sum % 5 == 0)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (solve(s))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}