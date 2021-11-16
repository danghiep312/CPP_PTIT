#include <bits/stdc++.h>
using namespace std;
int Swap (vector<int> arr, int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) count++;
    }

    int tmp = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > k) tmp++;
    }
    int res = tmp;
    for (int i = 0, j = count; j < n; j++, i++) {
        if (arr[i] > k) tmp--;

        if (arr[j] > k) tmp++;
        res = min(res, tmp);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        vector<int> a;
        cin >> n >> k;
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << Swap(a, n, k) << endl;
    }
}