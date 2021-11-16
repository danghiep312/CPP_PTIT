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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int count = 0;
                while (n % i == 0)
                {
                    count++;
                    n /= i;
                }
                cout << i << " " << count << " ";
            }
        }
        if (n > 1) cout << n << " " << 1;
        cout << endl;
    }
}