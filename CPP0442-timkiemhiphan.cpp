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

int binarySearch(vi arr, int left, int right, int x)
{
    while (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return 1;

        else if (arr[mid] > x)
            right = mid - 1;

        else
            left = mid + 1;
    }
    return -1;
}

vi a;
int n, x;
void init()
{
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << binarySearch(a, 0, n - 1, x) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        init();
    }
}