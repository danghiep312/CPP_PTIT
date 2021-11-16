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
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;

bool res(int n)
{
    int check = 0;
    while (n > 0)
    {
        int i = n % 10;
        if (i % 2 == 0)
            check++;
        else
            check--;
        n /= 10;
    }
    if (check == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int n, dem = 0;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (res(i) == 0)
        {
            cout << i << " ";
            dem++;
        }
        if (dem == 10)
        {
            cout << endl;
            dem = 0;
        }
    }
    return 0;
}