#include <bits/stdc++.h>
using namespace std;
struct dat
{
    int val, cnt;
    dat(int val, int cnt)
    {
        this->val = val;
        this->cnt = cnt;
    }
};

int main()
{
    int x;
    vector<dat> a;
    while (cin >> x)
    {
        bool flag = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i].val == x)
            {
                flag = false;
                a[i].cnt++;
                break;
            }
        }

        if (flag)
        {
            a.push_back(dat(x, 1));
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].val << " " << a[i].cnt << endl;
    }
}