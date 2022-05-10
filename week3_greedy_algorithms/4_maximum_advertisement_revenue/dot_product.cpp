#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n';
//#ifndef ONLINE_JUDGE
//freopen("out.txt", "w", stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v)                ((v).begin()), ((v).end())
#define pb                    push_back
#define MP                    make_pair
const int N = 1e5 + 10;
int freq[26];

int main() {
    fast
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    sort(all(a));
    sort(all(b));
    ll ans = 0;
    for (int i = 0; i < n; ++i)
        ans += a[i] * b[i];

    cout << ans;

}


