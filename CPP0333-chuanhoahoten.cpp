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

string str, word;

int main()
{
    vector<string> res;
    getline(cin, str);
    stringstream s(str);
    while (s >> word)
    {
        res.push_back(word);
    }
    for (int i = 0; i < res.size() - 1; i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            if (j == 0)
            {
                if (res[i][0] <= 'z' && res[i][0] >= 'a')
                {
                    res[i][0] -= 32;
                }
            }
            else
            {
                if (res[i][j] >= 'A' && res[i][j] <= 'Z') res[i][j] += 32;
            }
        }
    }
    for (int i = 0; i < res.back().size(); i++) {
        if (res[res.size() - 1][i] <= 'z' && res[res.size() - 1][i] >= 'a') res[res.size() - 1][i] -= 32;
    }
    for (int i = 0; i < res.size() - 1; i++) {
        cout << res[i];
        if (i != res.size() - 2) cout << " ";
        else cout << ", ";
    }
    cout << res.back();
}