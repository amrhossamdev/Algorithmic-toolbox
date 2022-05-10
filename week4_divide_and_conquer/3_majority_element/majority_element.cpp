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
const int N = 1e6 + 10;
ll freq[N];

int getMajorElement(vector<ll> v, int l, int r) {
    int ans = 0;
    if (l == r)
        return -1;
    if (l + 1 == r)
        return v[l];
    sort(all(v));
    int m = (r - l) / 2 + l;
    int majItem = v[m];
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == majItem)
            ++ans;
        if (ans > v.size() / 2)
            return 1;
    }
    return 0;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << getMajorElement(v, 0, n - 1) << endl;


}
