# Pascal Triangle

is another way that calculate the combination of nCr without using the factorial function at any point in the.

```cpp
vector<vector<int>>Pascal(){
     vector<vector<int>>pascal(100,vector<int>(100));
     for(int i=0;i<100;i++){
         pascal[i][0]=1;
         pascal[i][i]=1;
     }// this loop for the edges of triangle
     for(int i=1;i<99; i++){ // see I don't need to loop at  the start or end
         // because I already did!
         for(int j=1;j<i;j++){ // trace pascal to find out at every row you iterate at i elements
             pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];

         }
     }
    return pascal;
}
```
---


test it:
```cpp
#include<bits/stdc++.h>

using namespace std;
long long nCr(long long n,long long r){
    long long ans=1,div=1;
    for (long long i=r+1;i<=n;i++){
        ans*=i;
        ans/=div;
        div++;
    }
    return ans;
}
vector<vector<int>>Pascal(){
     vector<vector<int>>pascal(100,vector<int>(100));
     for(int i=0;i<100;i++){
         pascal[i][0]=1;
         pascal[i][i]=1;
     }
     for(int i=1;i<99; i++){ 
         for(int j=1;j<i;j++){ 
             pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];

         }
     }
    return pascal;
}
int main(){
  long long n,r;
  cin>>n>>r;
  vector<vector<int>>pascal=Pascal();
  cout<<nCr(n,r)<<endl;
  cout<<pascal[n][r]<<endl;
}
```
---
# do you see that pascal take a complexity of O(n^2) while nCr take O(n) ?
## so why we use pascal?
Pascal is a preprocessing Algorithm that you can use it to calculate nCr in O(1) time. 

in case your input will be a lot of queries of nCr you can use pascal to preprocess the triangle and then use it to calculate nCr in O(1) time.

so use pascal in preprocessing and nCr in queries^^.
