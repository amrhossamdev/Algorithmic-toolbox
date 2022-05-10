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

int getEditDistance(string s1, string s2, int n1, int n2) {
    int dp[n1 + 1][n2 + 1];
    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            if (i == 0) dp[i][j] = j;
            else if (j == 0) dp[i][j] = i;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i][j - 1],
                                    dp[i - 1][j],
                                    dp[i - 1][j - 1]});
        }
    }
    return dp[n1][n2];
}


int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cin >> s1 >> s2;

    cout << getEditDistance(s1, s2, s1.length(), s2.length());
}
