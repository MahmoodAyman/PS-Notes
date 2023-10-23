## Priority Queue

in priority queue the elements are sorted in Ascending order as Default

and you have access only to top element in container which is greater one

you can also force priority queue to sort element in Descending Order by a trick way or language give you a way

let’s start with a official way that c++ has

```cpp
int main() {
    Balltze();
    int q; cin>>q; // queries

    priority_queue<int>heap; // the default and this will print the max element first

    // for make it print the minimum first use:
    priority_queue<int,vector<int>,greater<int>>pq;

    // this also can construct by dq
    priority_queue<int,deque<int>,greater<int>>pq;
    // by declaring prirority queue like this it will sort elements in
    // descending order

    while(q--){
        string t ;cin>>t;
        int x;
        if(t=="push"){
            cin>>x;
            pq.emplace(x);
        }
        else if(t=="pop"){
            if(!pq.empty())pq.pop();
        }
        else {
            if(!pq.empty())cout<<pq.top()<<endl;
        }

    }
}

pq=priority_queue<in>(); // that will clear the priority_queue
```

the trick is you can easily multiple element by (-1) before you push it to the priority queue
that will make the priority_queue sort in an ascending order

```cpp
int main(){
    int n;
    cin>>n;
    priority_queue<int>pq;
    while(n--){
        string t; cin>>t;
        if(t=="push"){
            int x; cin>>x;
            pq.push(x*-1);
        }
        else if (t=="pop"){
                pq.pop();
        }

        else if (t=="top"){
                int x=pq.top();
                cout<<(x*-1)<<endl; // don't forget to multiple with -1 to get the original input!
        }
    }
}
```

## you can build your custom type of priorty_queue which is sort depending on your needs:

```cpp
class compare{
public:
    bool operator()(int a,int b){ // function to sort in a descending order
        return a<b;
    }
};
// feel free to build the compare function you need :D
int main()
{
    priority_queue<int,vector<int>,compare>heap;
    for(int i =0;i<5;i++){
        heap.push(i);
    }
    while(!heap.empty()){
        cout<<heap.top()<<" ";
        heap.pop();
    }

}
```

---
