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

vector<ll> partition(vector<ll> &a, int l, int r) {
    int x = a[l];
    int i_l = l;
    int i = l;
    int i_r = r;
    vector<ll> m(2);
    while (i <= i_r) {
        if (a[i] < x) {
            swap(a[i_l], a[i]);
            i_l++;
            i++;
        } else if (a[i] == x) {
            i++;
        } else {
            swap(a[i], a[i_r]);
            i_r -= 1;
        }
        m[0] = i_l;
        m[1] = i_r;
    }
    return m;
}

void quick_sort(vector<ll> &a, int l, int r) {
    if (l >= r) {
        return;
    }
    int k = l + rand() % (r - l + 1);
    swap(a[l], a[k]);
    vector<ll> m = partition(a, l, r);

    quick_sort(a, l, m[0] - 1);
    quick_sort(a, m[1] + 1, r);
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    quick_sort(v, 0, v.size() - 1);

    for (ll i : v) {
        cout << i << " ";
    }

}
