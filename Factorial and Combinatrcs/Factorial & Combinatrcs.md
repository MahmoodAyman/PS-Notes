# Factorial & Combinatrcs

## Factorial in Iterative Way

```cpp
long long Factorial(long long x){
    long long factorial=1;
    for(long long i=1;i<=x;i++){
        factorial*=i;
    }
    return factorial;
}
```

## Factorial in Recursive Way

```cpp
long long Factorial(long long x){
   if(x==0||x==1)return 1;
   return x* Factorial(x-1);
}
```

there are how to calculate nCr and nPr in factorial:

## Combination  nCr

```cpp
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
```

## Permutation nPr

```cpp
long long nPr(long long n,long long r){
    return Factorial(n)/ Factorial(n-r);
}
```
note that these Functions will Overflow if n≥22 or 21 on some Compilers

to see how to calculate nCr and nPr without using factorial function see [here](/Factorial%20and%20Combinatrcs/nCr%20%26%20nPr.md)
---

