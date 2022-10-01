# lambade Expressio

a way to type a function

```cpp
bool isEven;

int main(){
int n; cin>>n;
    isEven=[](int n){return n%2==0;}(n); // lambda expression 
    // this is a function that returns a bool value 
    if(isEven)cout<<"is Even";
    else cout<<"Odd";
} 
// to check if the number odd or not 
```