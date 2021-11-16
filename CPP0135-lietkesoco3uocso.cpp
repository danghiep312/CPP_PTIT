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

vi dd(1e6, 0);

void snt()
{
    dd[0] = dd[1] = 1;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (dd[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                dd[j] = 1;
            }
        }
    }
}

int main()
{
    snt();
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (dd[i] == 0)
            {
                cout << i * i << " ";
            }
        }
        cout << endl;
    }
}