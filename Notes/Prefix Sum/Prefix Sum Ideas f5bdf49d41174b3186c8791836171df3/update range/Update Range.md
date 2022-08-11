# Update Range

URL: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/F

you have an array and given range you need to update values of the array from left to right by specific value 

- first you need a prefix array which is intially have zeros array = original array +2
- in every range you need to add value to the left and subtract the value from the (right+1)
- do prefix sum to the array
- print the original array + prefix array with the same index

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<vector>
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
    // STL
    //* Vector */
    int n,q;
    cin>>n>>q ;
    vector<long long>v(n+1),pref(n+2);
    for (int i = 1 ; i<=n ;i++){
        cin>>v[i];
    }
    while (q--){
        int l , r,  cost ;
        cin>>l>>r >>cost ;
        pref[l]+=cost ;
        pref[r+1]-=cost ;
    }
    for (int i = 1; i<=n ;i++)
        pref[i]+=pref[i-1];
    for (int i = 1 ;i<=n ;i++)
        cout<<v[i]+pref[i]<<' ';
}
```

---

here is another idea to the update range

[Login - Codeforces](https://codeforces.com/group/Hxr783HdSp/contest/374563/submission/150641998)