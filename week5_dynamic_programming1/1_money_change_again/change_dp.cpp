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

int getMinCoins(int coins[], int n, int m) {
    int dp[m + 1];
    dp[0] = 0;
    for (int i = 1; i <= m; i++)
        dp[i] = INT_MAX;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++)
            if (coins[j] <= i) {
                int sub = dp[i - coins[j]];
                if (sub != INT_MAX && sub + 1 < dp[i])
                    dp[i] = sub + 1;
            }
    }
    if (dp[m] == INT_MAX)
        return -1;
    return dp[m];
}


int main() {
    fast
    ll m;
    cin >> m;
    int D[] = {1, 3, 4};
    cout << getMinCoins(D, 3, m);
    return 0;
}
