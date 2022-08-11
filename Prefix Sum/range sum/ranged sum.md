# ranged sum

URL: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E

make prefix sum to the array (summation from left to right)

then you given range that you have to print the summation of the array from index left to index right

```cpp
#include<bits/stdc++.h>
using namespace std;
#define all(v) ((v).begin()), ((v).end())	
#define sz(v) v.size()
#define endl "\n"
typedef long long ll;
typedef long long mahmoud;
typedef vector<int> vi;
typedef pair<int, int> pii;
constexpr auto EPS = 1e-9;
const int mod = (int)1e9 + 7;
const double pi = acos(-1);
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
void Ayman() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    Ayman();
    ll n, q;
    cin >> n >> q;
    vector<ll>v(n+1);
    v[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] = v[i - 1] + v[i]; // prefix on the same aray since you will not use it again
    }
    while (q--) {
        int l, r; cin >> l >> r;
        cout << v[r] - v[l-1] << endl;
    }
}
```