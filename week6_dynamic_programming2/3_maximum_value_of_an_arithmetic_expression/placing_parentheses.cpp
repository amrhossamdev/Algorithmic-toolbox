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
ll pre[N];

ll Make_operation(ll Operand_1, ll Operand_2, char op) {
    if (op == '*')
        return Operand_1 * Operand_2;
    else if (op == '+')
        return Operand_1 + Operand_2;
    else if (op == '-')
        return Operand_1 - Operand_2;
}

ll Maximize_The_Expre(const string &Expre) {
    int Len = Expre.size();
    int NumOfOperands = (Len + 1) / 2;

    ll Mini[NumOfOperands][NumOfOperands];
    ll Maxi[NumOfOperands][NumOfOperands];

    memset(Mini, 0, sizeof(Mini));
    memset(Maxi, 0, sizeof(Maxi));
    for (int i = 0; i < NumOfOperands; i++) {

        Mini[i][i] = stoll(Expre.substr(2 * i, 1));
        Maxi[i][i] = stoll(Expre.substr(2 * i, 1));
    }

    for (int s = 0; s < NumOfOperands - 1; s++) {
        for (int i = 0; i < NumOfOperands - s - 1; i++) {
            int j = i + s + 1;
            ll MinValue = LLONG_MAX;
            ll MaxValue = LLONG_MIN;

            for (int k = i; k < j; k++) {
                ll a = Make_operation(Mini[i][k], Mini[k + 1][j], Expre[2 * k + 1]);
                ll b = Make_operation(Mini[i][k], Maxi[k + 1][j], Expre[2 * k + 1]);
                ll c = Make_operation(Maxi[i][k], Mini[k + 1][j], Expre[2 * k + 1]);
                ll d = Make_operation(Maxi[i][k], Maxi[k + 1][j], Expre[2 * k + 1]);

                MinValue = min(MinValue, min(a, min(b, min(c, d))));
                MaxValue = max(MaxValue, max(a, max(b, max(c, d))));

            }
            Mini[i][j] = MinValue;
            Maxi[i][j] = MaxValue;
        }
    }

    return Maxi[0][NumOfOperands - 1];
}

int main() {
    string Expresion;
    cin >> Expresion;

    cout << Maximize_The_Expre(Expresion) << endl
}