#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef int i;
#define endl "\n"
//#ifndef ONLINE_JUDGE
//freopen("out.txt", "w", stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v)                ((v).begin()), ((v).end())
#define pb                    push_back
#define MP                    make_pair
const int N = 1e5 + 10;

int getGCD(ll a, ll b) {
    if (b == 0)
        return a;
    return getGCD(b, a % b);
}

int main() {
    fast
    ll a, b;
    cin >> a >> b;
    cout << getGCD(a, b);
    return 0;

}
