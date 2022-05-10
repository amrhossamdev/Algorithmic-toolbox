#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//typedef int i;
#define endl "\n"
//#ifndef ONLINE_JUDGE
//freopen("out.txt", "w", stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v)                ((v).begin()), ((v).end())
#define pb                    push_back
#define MP                    make_pair
const int N = 1e5 + 10;

ll pisano(ll m) {
    ll a = 0;
    ll b = 1;
    ll c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

ll getFibM(ll n, ll m) {
    ll pp = pisano(m); // getting period
    n = n % pp;
    long a = 0;
    long b = 1;
    if (n == 0) return 0;
    else if (n == 1) return 1;
    for (int i = 0; i < n - 1; i++) {
        ll t = 0;
        t = b;
        b = (a + b) % m;
        a = t;
    }
    return b % m;
}

ll fibSumFast(ll n) {
    int n1 = (n + 2) % 60; // pisano period 10% is 60%
    int n2 = getFibM(n1, 10);
    if (n2 == 0) {
        return 9;
    } else {
        return n2 - 1;
    }
}

int main() {
    fast
    ll n;
    cin >> n;
    cout << fibSumFast(n);
}
