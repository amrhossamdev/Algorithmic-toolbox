#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lld;
#define endl '\n';

//#ifndef ONLINE_JUDGE
//freopen("out.txt", "w", stdout);
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v)                ((v).begin()), ((v).end())
#define pb                    push_back
#define MP                    make_pair
#define py cout<<"YES\n";
#define pn cout<<"NO\n"
const int N = 1e6 + 10;
const int MOD = (int) 1e9 + 7;

vector<ll> getSequence(int n) {
    vector<ll> seq;
    vector<ll> a(n + 1);
    for (int i = 1; i < a.size(); i++) {
        a[i] = a[i - 1] + 1;
        if (i % 2 == 0) a[i] = min(1 + a[i / 2], a[i]);
        if (i % 3 == 0) a[i] = min(1 + a[i / 3], a[i]);
    }
    int i = n;
    while (i > 1) {
        seq.pb(i);
        if (a[i - 1] == a[i] - 1) i = i - 1;
        else if (i % 2 == 0 && (a[i / 2] == a[i] - 1))i = i / 2;
        else if (i % 3 == 0 && (a[i / 3] == a[i] - 1)) i = i / 3;
    }
    seq.pb(1);
    reverse(all(seq));
    return seq;
}

int main() {
    int n;
    cin >> n;
    vector<ll> v = getSequence(n);
    cout << v.size() - 1 << endl
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
}
