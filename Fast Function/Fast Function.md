# Fast Function

## Fast Function

```cpp
void Fast(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
```

## Fast Function with input and output files reading locally

```cpp
void Fast(){
    std::ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
#ifndef ONLINE_JUDGE // not reading if it in online Judge 
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
#endif    
}
```