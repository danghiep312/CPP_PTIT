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

bool check(int n)
{
    set<int> b;
    vi a;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            a.push_back(i);
            b.insert(i);
        }
    }
    if (n) {
        a.push_back(n);
        b.insert(n);
    }
    if (a.size() == 3 && b.size() == 3) return true;
    return false; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n)) cout << 1;
        else cout << 0;
        cout << endl;
    }
}