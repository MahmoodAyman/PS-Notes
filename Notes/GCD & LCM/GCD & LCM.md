# GCD & LCM

## GCD in Iterative Way

```cpp
int GCD(int a, int b) {
    int r0 = a, r1 = b;
    while (r1 != 0) {
        int next = r0 % r1;
        r0 = r1;
        r1 = next;
    }
    return r0;
}
```

## GCD Recursive way

```cpp
int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

// you can use ternary operator
long long gcd(long long a, long long b) {return b? gcd(b, a % b):a;}
```

# LCM is multiple of a*b over gcd(a,b)