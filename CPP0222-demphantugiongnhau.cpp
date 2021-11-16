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
        int n, x, s = 0;
        cin >> n;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            set<int> c;
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                c.insert(x);
            }
            for (int k : c)
                b.push_back(k);
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++)
        {
            int k = 1;
            while (b[i] == b[i + 1])
            {
                k++;
                i++;
            }
            if (k == n)
                s++;
        }
        cout << s << endl;
    }
}