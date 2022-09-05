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
- a * b = LCM(a,b) * GCD (a,b)
    - LCM(a, b) = (a * b) / GCD (a,b)

```cpp
long long gcd(long long int a, long long int b)
{
	  if (b == 0)
    return a;
	  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return ((a*b) / gcd(a, b));
}
```

### to avoid overflow divide by b after calc GCD see how:

```cpp
long long gcd(long long int a, long long int b)
{
	  if (b == 0)
    return a;
	  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
```