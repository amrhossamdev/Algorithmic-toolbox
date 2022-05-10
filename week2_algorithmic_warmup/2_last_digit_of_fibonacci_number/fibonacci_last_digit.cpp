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


ll getLastDigitFib(ll n) {
    ll arr[N];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; ++i) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
    }
    cout << arr[n];
}

ll getLastDigitFib2(ll n) {
    if (n <= 1)
        return n;
    ll a = 0;
    ll b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int t = a % 10;
        a = b % 10;
        b = t + b % 10;
    }
    return b % 10;
}

int main() {
    fast
    ll n;
    cin >> n;
    cout << getLastDigitFib2(n);

}
