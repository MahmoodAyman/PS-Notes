## Deque

I call it JOKER  of STLs it can do most of things other containers do 

- you have random access
- you can push back or push front into it
- you can pop back and pop front from it

```cpp
int main() {
    Balltze();
    int q; cin>>q;
    deque<int>qu;
    while(q--){
        string t ;cin>>t;
        int x;
        if(t=="push_back"){
            cin>>x;
            qu.emplace_back(x);
        }
        else if(t=="push_front"){
            int x; cin>>x;
            qu.emplace_front(x);
        }
        else if(t=="back"){
            cout<<qu.back()<<endl;
        }
        else if(t=="front"){
            cout<<qu.front()<<endl;
        }
        else if(t=="pop_front"){
            qu.pop_front();
        }
        else if(t=="pop_back"){
            qu.pop_back();
        }
        else{
            cin>>x;
            cout<<qu[--x]<<endl;
        }
    }
}
```


---