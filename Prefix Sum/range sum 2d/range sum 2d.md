# range sum 2d

URL: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/G

you have two d array 

first do prefix to all rows 

then do prefix to all columns 

then you now have in each cell the summation of all cells before it 

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define endl "\n"
constexpr auto EPS = 1e-9;
const int mod = (int)1e9 + 7;
const double pi = acos(-1);
void Balltze(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    Balltze();
    int n,m,q; cin>>n>>m>>q;
    vector<vector<long long>>v(n+1,vector<long long >(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            v[i][j]+=v[i][j-1];
        }
    }for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            v[i][j]+=v[i-1][j];
        }
    }
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<v[x2][y2]-v[x1-1][y2]-v[x2][y1-1]+v[x1-1][y1-1]<<endl;
    }

}
```

---

Here is a trick for you so you don’t need to prefix rows then columns just do it all in the same loop 

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define endl "\n"
constexpr auto EPS = 1e-9;
const int mod = (int)1e9 + 7;
const double pi = acos(-1);
void Balltze(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    Balltze();
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<long long>> v(n + 1, vector<long long>(m + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
            v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
        }
    }
        while (q--) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            cout << v[x2][y2] - v[x1 - 1][y2] - v[x2][y1 - 1] + v[x1 - 1][y1 - 1] << endl;
        }
}
```