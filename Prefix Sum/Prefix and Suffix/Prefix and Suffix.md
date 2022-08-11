# Prefix and Suffix

URL: https://codeforces.com/group/Hxr783HdSp/contest/374563/problem/C

prefix and suffix is not just about summation you can also use it to find elements greater than you from right by prefix 

and greater than you from left by suffix 

- you need two arrays more one for prefix and one for suffix
- in prefix you need to put in every index the largest between the index before and the current in the array
- in suffix do the same but from right to left

```cpp
#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>

using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define endl "\n"
constexpr auto EPS = 1e-9;
const int mod = (int) 1e9 + 7;
const double pi = acos(-1);

void Balltze() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    Balltze();
    int n; cin>>n;
    vector<int>v(n+1),left(n+2),right(n+2);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        left[i]=max(v[i],left[i-1]);
    }
    for(int i=n;i>=1;i--){
        right[i]=max(right[i+1],v[i]);
    }
    for(int i=1;i<=n;i++){
        if(v[i]>=right[i]&&v[i]>=left[i])cout<<"both"<<endl;
        else if(v[i]>=right[i])cout<<"right"<<endl;
        else if(v[i]>=left[i])cout<<"left"<<endl;
        else cout<<"none"<<endl;
    }
}
```