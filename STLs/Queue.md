## Queue

in queue it just like an any queue you can push to the back and you can access last and first element and if you pop it will remove first element in queue

always check if it’s empty before you pop or print

```cpp
int main() {
    Balltze();
    int q; cin>>q;
    queue<int>qu;
    while(q--){
        string t ;cin>>t;
        if(t=="push"){
            int x; cin>>x;
            qu.push(x);
        }
        else if(t=="back"){
            cout<<qu.back()<<endl;
        }
        else if(t=="front"){
            cout<<qu.front()<<endl;
        }
        else if(t=="pop"){
            qu.pop();
        }
    }
}
```


---