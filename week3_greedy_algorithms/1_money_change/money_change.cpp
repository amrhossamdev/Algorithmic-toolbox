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
    int m;
    cin >> m;
    int ans = 0;
    while (m != 0) {
        if (m % 10 == 0) {
            m -= 10;
            ans++;
        } else if (m % 5 == 0) {
            m -= 5;
            ans++;
        } else if (m % 1 == 0) {
            m -= 1;
            ans++;
        }
    }
    cout << ans;

}


