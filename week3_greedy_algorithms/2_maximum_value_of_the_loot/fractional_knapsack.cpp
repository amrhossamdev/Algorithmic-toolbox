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

int getMaxIndex(vector<double> ratio, vector<double> w) {
    double max = 0.0;
    int index = 0;
    for (int i = 0; i < ratio.size(); ++i) {
        if (w[i] != 0 && ratio[i] > max) {
            max = ratio[i];
            index = i;
        }
    }
    return index;
}

double getValue(double weight, vector<double> w, vector<double> v, vector<double> ratio) {
    double value = 0.0, selectedExpWeight;
    int index;
    for (int i = 0; i < w.size(); ++i) {
        if (weight == 0) return value;
        index = getMaxIndex(ratio, w);
        selectedExpWeight = min(w[index], weight);
        value += selectedExpWeight * (double) v[index] / w[index];
        w[index] -= selectedExpWeight;
        weight -= selectedExpWeight;
    }
    return value;
}

int main() {
    fast
    double n, weight;
    cin >> n >> weight;
    vector<double> w(n), v(n);
    vector<double> ratio(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i] >> w[i];
        ratio[i] = v[i] / w[i];
    }
    printf("%.4f", getValue(weight, w, v, ratio));

}


