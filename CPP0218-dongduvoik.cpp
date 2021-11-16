#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], minz = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minz = min(a[i], minz);
        }
        int s = a[0] - minz, cnt = 0;
        for (int i = 1; i < n; i++)
            s = __gcd(s, a[i] - minz);
        for (int i = 1; i <= sqrt(s); i++)
        {
            if (s % i == 0)
            {
                if (i != s / i)
                    cnt += 2;
                else
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}