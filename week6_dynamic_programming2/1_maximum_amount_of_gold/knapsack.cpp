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
ll pre[N];

int solve(int W, const vector<int> &WT) {
    vector<vector<int>> value(WT.size() + 1, vector<int>(W + 1, 0));

    for (size_t i = 1; i <= WT.size(); i++) {
        for (int w = 1; w <= W; w++) {
            value[i][w] = value[i - 1][w];
            if (WT[i - 1] <= w) {
                int val = value[i - 1][w - WT[i - 1]] + WT[i - 1];
                if (value[i][w] < val) {
                    value[i][w] = val;
                }
            }
        }
    }
    return value[WT.size()][W];
}

int main() {
    ll n, W;
    cin >> W >> n;
    vector<int> wt(n);
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    cout << solve(W, wt) << endl

}
