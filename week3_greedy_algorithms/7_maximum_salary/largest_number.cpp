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

bool comp(int a, int b) {
    // a+b == 212
    // b+a == 221 it's bigger !
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main() {
    fast
    int n;
    cin >> n;
    vector<int> v(n);
    string ans = "";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(all(v), comp);
    for (int i = 0; i < v.size(); ++i)
        ans += to_string(v[i]);
    cout << ans;

}

