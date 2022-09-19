## Priority Queue
    
    in priority queue the elements are sorted in Ascending order as Default
    
    and you have access only to top element in container which is greater one
    
    you can also force priority queue to sort element in Descending Order by a trick way or language give you a way 
    
    let’s start with a official way that c++ has 
    
    ```cpp
    int main() {
        Balltze();
        int q; cin>>q;
        priority_queue<int,vector<int>,greater<int>>pq;
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
    
    pq=priority_queue<in>();
    ```
    
    the trick is you can easily multiple element by (-1) before you push it to the priority queue 
    
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
                    cout<<(x*-1)<<endl;
            }
        }
    }
    ```
    

---