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
        int n, k;
        cin >> n >> k;
        int a[n];
        deque<int> b;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            while (!b.empty() && a[b.back()] <= a[i])
                b.pop_back();
            b.push_back(i);
            while (b.front() + k <= i)
                b.pop_front();
            if (i >= k - 1)
                cout << a[b.front()] << " ";
        }
        cout << endl;
    }
}