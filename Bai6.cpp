#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x1, yy, x2, y2, x3, y3, x4, y4;
ll x[5], y[5];
int t, res;

double kc(ll a, ll b, ll c, ll d) {
    return (double)sqrt((c - a)*(c - a) + (d - b)*(d - b));
}

bool check(ll a, ll a1, ll b, ll b1, ll c,  ll c1, ll d, ll d1) {
    if ((kc(a, a1, c, c1) == kc(x1, yy, x3, y3) && kc(b, b1, d, d1) == kc(x2, y2, x4, y4))
        || (kc(a, a1, c, c1) == kc(x2, y2, x4, y4) && kc(b, b1, d, d1) == kc(x1, yy, x3, y3))) return true;
    else return false;
}

int main() {
    cin >> x1 >> yy >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3] >> x[4] >> y[4];

        if (check(x[1], y[1], x[2], y[2], x[3], y[3], x[4], y[4])) res++;
    }

    cout << res;

    return 0;
}
