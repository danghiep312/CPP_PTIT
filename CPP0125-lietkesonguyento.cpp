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
const int oo = 1000001;

int dd[oo] = {0};

void snt()
{ // sàng chay
    dd[0] = dd[1] = 1;
    for (int i = 2; i * i <= oo; i++)
    {
        if (dd[i] == 0)
        {
            for (int j = i * i; j <= oo; j += i)
            {
                dd[j] = 1;
            }
        }
    }
}

int main()
{
    snt();

    int a, b;
    cin >> a >> b;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a + 1; i < b; i++)
    {
        if (dd[i] == 0)
            cout << i << " ";
    }
}