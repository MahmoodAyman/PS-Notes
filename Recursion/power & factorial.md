### Power

I think this is not a real problem :”D

```cpp
int power(int base,int pow) {
    int res=1;
    if(pow==0)return 1;
    res*= base;
    return res*power(base,pow-1);
}
```

### something called binary exponentiation

if you want to calculate power in log(n) time by using binary exponentiation and in a recursive way


```cpp
int power(int base,int pow) {
    if(pow==0)return 1;
    int temp=power(base,pow/2);
    int res=temp*temp;
    if(pow%2)res*=base;
    return res;
}
```
---

### may be you ask about Factorial

```cpp
int factorial(int n){
    int res=1;
    if(n<=1)return 1; // mean 0,1 only
    return n*factorial(n-1);
}
```

---

**watch overflow!!**