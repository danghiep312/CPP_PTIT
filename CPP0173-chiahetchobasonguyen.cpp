#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long bcnn(long long a, long long b)
{
    long long res = __gcd(a, b);
    return a / res * b;
}

void solve(long long x, long long y, long long z, long long n)
{
    long long s = pow(10, (n - 1));
    long long k = bcnn(x, bcnn(y, z));
    if (k >= s * 10)
        cout << -1 << endl;
    else
    {
        cout << k * (long long)ceil(pow(10, n - 1) / k) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        solve(x, y, z, n);
    }
}