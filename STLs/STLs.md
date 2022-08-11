# STLs

# Don’t Forget &

---

- **Vector**
    
    ## Implementation and some Basic Functions
    
     
    
    ```cpp
    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
    	int n=5;
    vector<int>v;
    vector<int>v1(n); // vector with size n and all elements are zeros 
    v.push_back(value); // will put this value in  o(1)
    vector<int> v3(5, 12); // vector with size 5 and all elements are 12 
    for(auto &it:v) cout<<it<<" "; // print all values 
    v.at(0); v[0]; //same to access element number 0
    /*
    However, the at() function is preferred over [] 
    because at() throws an exception whenever the vector is out of bound,
     while [] gives a garbage value.
    */
    v.pop_back(); //remove the last element in the vector
    cout<<v.back(); // show last element in vector
    cout<<v.front(); // show first element in vector
    cout<<v.size(); // print size of array 
    cout<<v.empty(); // if vector is empty will return 1 else return 0
    v.clear(); //remove all arrays element 
    v.begin(); iterator pointing to first element 
    v.end(); iterator pointing after the last element
    sort(v.begin(),v.end()); 
    reverse(v.begin(),v.end()); //it reverse array as it not sort and then reverse
    sort(v.rbegin(),v.rend());  // sort the array and then reverse it
    v.resize(100); // change array size  // keep in mind in problem test cases you need to clear the vector first
    v.emplace_back(); // same as push pack but faster 
    }
    ```
    

---

- **Stack**
    
    stack one of the most container that has many ideas and applications on it and need you to be careful with handling to avoid run time errors 
    
    you can access the last element pushed to the stack only and you have no random access 
    
    one of the most application is regular expressions and undo and redo 
    
    ## **Always check if the stack empty before you pop to print anything**
    
    ```cpp
    int main() {
        Balltze();
        int q; cin>>q;
        stack<int>st;
        while(q--){
            string t; cin>>t;
            int x;
            if(t=="push"){
                cin>>x;
                st.push(x);
            }
            else if(t=="pop"){
                if(!st.empty())
                   st.pop();
            }
            else{
                if(!st.empty()){
                    cout<<st.top()<<endl;
                }
            }
        }
    }
    
    st=stack<int>(); // this is to clear stack elements 
    ```
    

---

- **Queue**
    
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

- **Deque**
    
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

- **Priority Queue**
    
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

- Map

---

- Set