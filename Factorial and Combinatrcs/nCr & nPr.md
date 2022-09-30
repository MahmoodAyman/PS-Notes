### NcR without factorial function: 

```cpp
long long nCr(long long n,long long r){
    long long ans=1,div=1;
    for (long long i=r+1;i<=n;i++){
        ans*=i;
        ans/=div;
        div++;
    }
    return ans;
}
```

--- 

### NpR without factorial function: 

```cpp
long long nPr(long long n,long long r){
    long long ans=1;
    for (long long i=n-r+1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
```
### to avoid overflow you can use this function:

```cpp
const int mod = 1e9 + 7;
long long nPr(long long n,long long r){
    long long ans=1;
    for (long long i=n-r+1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    return ans;
}
```