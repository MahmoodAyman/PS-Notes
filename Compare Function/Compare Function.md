# Compare Function

functions to compare array elements and sort them as you want 

```cpp
bool comp(int x,int y){
    return x>y;
}
int main(){
       Balltze();
       int n; cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       sort(all(v),comp);
       for(auto it:v)cout<<it<<" ";

}
```

---

you can write this function in lambada expression :

```cpp
int n; cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       sort(all(v),[&](int n,int m)->bool{
           return n>m;
       });
       for(auto it:v)cout<<it<<" ";
function to sort array in descending order
```

---

you can also write it by passing parameter when you construct your comperator

```cpp
class cmp{
    int param;
public:
    cmp(int p):param(p){}
    bool operator()(int m,int n){
        return m>n;
    }
};
int main(){
       Balltze();
       int n; cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       sort(all(v),cmp(5));
       for(auto it:v)cout<<it<<" ";
}
```

---

compare function to sort assume to absolute value

```cpp

bool compare (int x,int y){
return abs(x)<abs(y);
}
int main(){
       Balltze();
       int n; cin>>n;
       vector<int>v(n);
       for(auto &it:v)cin>>it;
       sort(all(v),[](int x,int y)-> bool{
           return abs(x)<abs(y);
       });
       for(auto it:v)cout<<it<<" ";
}
```