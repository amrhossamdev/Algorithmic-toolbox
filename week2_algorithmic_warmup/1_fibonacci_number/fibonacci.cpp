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


int main() {
    fast
    int n;
    cin >> n;
    int arr[100006];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 50; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n];


}
