# Binary Search

## Basic Binary Search Function

> from now on you must declare variables global
> 

```cpp
int n,q;// as you see variables and array are global
vector<int>v;
bool BS(int pos){
    int l=0,r=v.size()-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(v[mid]==pos){
            return true;
        }
        else if(v[mid]>pos)r=mid-1;
        else if(v[mid]<pos)l=mid+1;
    }
    return false;
}
int main() {
    Balltze();
     cin>>n>>q;
    v.resize(n);  // because global array don't have size yet
    for(auto &it:v)cin>>it;
    sort(all(v));
        int x; cin>>x;
        if(BS(x))cout<<"found"<<endl;
        else cout<<"not found"<<endl;
}
```

---

## Lower_bound

> if you have int x lower bound function used to find first element in the array which greater than or equal to x
> 

```cpp
int lower(int x){
    int l=0,r=v.size(),mid,cur=-1;
    while(l<r){
        mid=(l+r)/2;
        if(v[mid]>=x){
            cur=v[mid];
            r=mid;
        }
        else l=mid+1;
    }
    return cur;
}
int main() {
    Balltze();
     cin>>n>>q;
    v.resize(n);
    for(auto &it:v)cin>>it;
    sort(all(v));
        int x; cin>>x;
        cout<<lower(x)<<endl;
}

//there's a built in function called lower_bound;
to use it {

}
```

there is a built in function for that called lower_bound

```cpp
int x; cin>>x;
int idx=lower_bound(v.begin(),v.end(),x)-v.begin();
//but you must check if idx==n then that's out of array range and must return -1
else cout<<v[idx] 
```

---

## Upper_bound

> same as lower bound  but it returns first element greater than x only not equal
> 

```cpp
int n,q;
vector<int>v;
int upper(int x){
    int l=0,r=v.size(),mid,cur=-1;
    while(l<r){
        mid=(l+r)/2;
        if(v[mid]>x){
            cur=v[mid];
            r=mid;
        }
        else l=mid+1;
    }
    return cur;
}
int main(){
cin>>n>>q;
v.resize(n);
for(auto &it:v)cin>>it;
int x; cin>>;
cout<<upper(x)<<endl;
}
```

and also there is a built in function for that 

```cpp
int x; cin>>x;
int idx=upper_bound(v.begin(),v.end(),x)-v.begin();
//you also must check if idx==n then that's out of array range and must return -1
else cout<<v[idx] 
```

---

a problem to practice on binary search 

[Problem - B - Codeforces](https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/B)

---

you can know more from here 

[Binary Search functions in C++ STL (binary_search, lower_bound and upper_bound) - GeeksforGeeks](https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/)