# Binary & Modular Exponention

## Fast power in a iterative way

```cpp
long long fastPower(int b,int p){
    long long res=1;
    while(p){
        if(p%2)res*=b;
        b*=b;
        p/=2;
    }
    return res;
}
------------------------------------------
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
```

## Fast power in recursive way

```cpp

long long fast_power(long long a,long long b){
    if(b==0)return 1;
    long long temp= fast_power(a,b/2);
    long long res=temp*temp;
    if(b%2)res*=a;
    return res;
}

------------------------------------
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
```

time complexity is o(log(n)) but it’s not about time it’s about Overflow!

what if you asked to calc power(2,10^18)???

so you need to take mod: 

## Binary Power Iterative with mod

```cpp
long long fastPower(int b,int p,int mod){
    long long res=1;
    while(p){
        if(p%2)res=(res*b)%mod;
        b=(b*b)%mod;
        p/=2;
    }
    return res;
}
```

## Binary Power recursive with mod

```cpp
long long fast_power(long long a,long long b,long long mod){
    if(b==0)return 1;
    long long temp= fast_power(a,b/2,mod);
    long long res=(temp*temp)%mod;
    if(b%2)res=(res*a)%mod;
    return res;
}
```

---