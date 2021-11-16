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

vector<int> a(1e6, 0);
vector<int> countt(1e6, 0); // từ 1 đến i có countt[i] số nguyên tố
void countPrime()
{
    a[0] = a[1] = 1;
    for (int i = 2; i <= 1e6; i++)
    {
        countt[i] += countt[i - 1];
        if (a[i] == 0)
        {
            countt[i]++;
            for (long long j = (long long)i * i; j <= 1e6; j += i)
            {
                a[j] = 1;
            }
        }
    }
}

void solve() {
    ll l, r;
    cin >> l >> r;
    cout << countt[r] - countt[l - 1] << endl;
}

int main()
{

    countPrime();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}