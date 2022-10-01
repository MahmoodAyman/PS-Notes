### NcR without factorial function: 

cause factorial function will overflow starting from 20!
you can calculate nCr and nPr without factorial function by using the following formula:

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
---

### Circular Permutations without factorial function: 

permutations which require arranging the elements in a circle closed curves 

![Circular Permutation](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS-ovw4cj8GMX2-p0K6gBaCB6ntSfsjQ_Id8yYYW8QDhItFIIa9-cfjy-GmZvFo3DYIlTI&usqp=CAU)

```cpp

long long nQr(long long n,long long r){
  long long ans=1;
  for (int i=n-r+1;i<=n;i++){
    ans*=i;
    if(ans%r==0){
      ans/=r;
      r=1;
    }
  }
    return ans;
}
```

if you are confused you can just calculate the npr and divide it by r! 

```cpp
long long nPr(long long n,long long r){
  long long ans=1;
  for (int i=n-r+1;i<=n;i++){
    ans*=i;
  }
    return ans;
}
int main(){
  long long n,r;
  cin>>n>>r;
  cout<<nPr(n,r)/r<<endl;
}
```