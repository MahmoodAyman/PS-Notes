### problem statement

`count prime numbers within range from start to end 
without using any loops`

```cpp
bool is_prime(int x, int i = 2) {
    if (i * i > x || x == 2) {
        return 1;
    }
    if(x<=1)return false;
    if (x % i == 0)return 0;
    return is_prime(x, i+1);
}

int count_primes(int st, int ed) {
    int cnt=0;
    if(st>=ed){
        if(is_prime(st))cnt++;
        return cnt;
    }
    if(is_prime(st))cnt++;
    return cnt+count_primes(st+1,ed);
}
int main(){
	cout<<count_primes(10,20)<<endl;
}
```

### output: 4