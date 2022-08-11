# Prime Functions

## Function to check if Number is Prime or Not

```cpp
bool isprime(long long x){
    if(x==1) return false;
    for(long long i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}  //with no fear of Overflow!!
```

---

## Prime Factors

```cpp
vector<int>P_Factors;
void Prime_Factors(int x){
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            x/=i;
            P_Factors.push_back(i);
        }
    }
    if(x!=1){
        P_Factors.push_back(x);
    }
    sort(all(P_Factors));
}
```

---

## T-Primes

t-prime is the number has only 3 Divisors 

```cpp
//to check if Numbere has 3 Divisors or NOt
map<ll,bool>mp;
    mp[0]=mp[1]=true;
    for(ll i=2;i*i<=1e6;i++){
        if(!mp[i]){
            for(int j=i*i;j<=1e6;j+=i){
                mp[j]=true;
            }
        }
    }

ll x; cin>>x;
        ll z=(ll)sqrt(x);
        if(z*z==x&&!mp[z])
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
```

---

## Generate Prime Factors

```cpp
vector<int>v;
    int x; cin>>x;
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            v.push_back(i);
            x/=i;
        }
    }
    if(x)v.push_back(x);
    for(auto it:v)cout<<it<<" ";
```

---

Find Kth ugly number  

ugly number number has only {2,3,5} prime factors 

```cpp
set<long long>st;
    int k; cin>>k;
    if(k==1||k==2||k==3||k==4||k==5)return cout<<k<<endl,0; Default value
    st.insert(1);
    k--;
    while(k--){
        auto it= st.begin();
        long long x=*it;
        st.erase(it);
        st.insert(x*2);
        st.insert(x*3);
        st.insert(x*5);
    } //when k =1 first element in the set will be the Kth ugly number!!
    cout<<*st.begin()<<endl;

```

---

## number of primes within range

if you want to know only the number of primes from 1 to n 

you can use this simple formula : 

```cpp
int n=10;
cout<<int(n/log(n))<<endl; //log her is = ln 
//you need to cast it to int caue it will return floating value
```