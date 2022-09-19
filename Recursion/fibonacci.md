### Fibonacci

in this problem I need to calculate fibonacci sequence  

```cpp
int fibonacci(int n){
    if(n==1||n==2)return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int n;cin>>n;
    cout<<fibonacci(n)<<endl;
}
```