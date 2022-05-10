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
ll pre[N];
ll arr[N];

ll binarySearch(int arr[], int l, int r, int k) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == k)
            return mid;
        if (arr[mid] > k)
            return binarySearch(arr, l, mid - 1, k);

        return binarySearch(arr, mid + 1, r, k);
    }
    return -1;
}

int main() {
    ll n, k;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        cout << binarySearch(arr, 0, n-1, x) << " ";
    }


}
