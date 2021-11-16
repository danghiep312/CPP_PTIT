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

struct SinhVien
{
    string name, ID;
    string room, birth;
    double GPA;
    SinhVien() {
        ID = "B20DCCN001";
    }
};

void nhap(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.room >> a.birth;
    cin >> a.GPA;
}

void in(SinhVien a) {
    cout << a.ID << " " << a.name << " " << a.room << " ";
    string tmp;
    for (int i = 0; i < a.birth.size(); i++) {
        tmp += a.birth[i];
        if (a.birth[i] == '/' || i == a.birth.size() - 1) {
            if (tmp.size() == 2) cout << 0;
            else if (tmp.size() > 3) {
                cout << tmp;
                break;
            }
            cout << tmp;
            tmp.clear();
        }
    }
    cout << " " << setprecision(2) << fixed << a.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}