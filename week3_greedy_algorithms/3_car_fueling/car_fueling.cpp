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
int freq[28];

int getMinRefills(int n, int d, vector<int> x, int l) {
    int ans = 0;
    int currRefill = 0;
    int lastRefill = 0;

    if ((x[currRefill] + l) >= d)
        return 0;

    while (currRefill < n) {
        lastRefill = currRefill;
        while ((currRefill < n) && ((x[currRefill + 1] - x[lastRefill]) <= l)) {
            currRefill += 1;
        }
        if (currRefill == lastRefill) return -1;
        ans += 1;
        if (x[currRefill] + l >= d)
            return ans;
    }
    return -1;
}

int main() {
    fast
    int d, l, n;
    cin >> d >> l >> n;
    vector<int> x;
    int t;
    x.push_back(0);
    for (int i = 0; i < n; ++i) {
        cin >> t;
        x.push_back(t);
    }
    cout << getMinRefills(n, d, x, l);
}

