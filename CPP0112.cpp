#include <bits/stdc++.h>
using namespace std;

double range(double a, double b, double c, double d) {
    return sqrt((a - c)*(a - c) + (b - d)*(b - d));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << setprecision(4) << fixed << range(a,b,c,d) << endl; 
    }
}