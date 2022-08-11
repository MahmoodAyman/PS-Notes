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

- **Map**
    
    one of the best containers ever 
    
    the map is **an associative container** that stores elements in sorted
    
    each element has a key and value and no two values can have the same key 
    
    the key is like an index in an ordinary array for example
    
    the key could be any datatype such as string, int or anything 
    
    ```cpp
    #include<map>  // required to use it
    
    int main(){
    
    map<int,int>mp;
    
    // insert function: 
    map.insert(pair<int,int>(1,30)); // means insert key as 1 and value as 30
    // or 
    mp.insert({1,40}); // if you enter the same key with another value will not be duplicated 
    //and the old value will not change
    
    // another way to insert is: 
    mp[1]=30;
    // and in case of overwritten the key will take a new value 
    mp[1]=40;
    cout<<mp[1];   // output 40 
    
    }
    ```
    
    ```cpp
    // print map: 
    map<int,int>::iterator itr; //define iterator to iterate over map 
    for(itr = mp.begin();itr!=mp.end();itr++){
    cout<< itr->first << itr->second
    }
    
    // another way to iterate over the map:
    for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
    }
    ```
    
    ```cpp
    // assign map to a new one 
    map<int,int>mp2 (mp.begin(),bp.end();
    
    ```
    
    ```cpp
    erase map
    mp.erase(mp.begin(),mp.find(3)); // remove all elements up to element with key =3
    // we already know that map is sorted based on keys so the keys less than 3 will be removed 
    ```
    
    you can also use lower bound and upper bound on  the map from the fact that it sorted
    
    lower bound function will return value pointing to the key in the map which is equivalent to the key 
    in case key is not found.. function will return an iterator pointing to the key which is immediately greater than the passed key 
    if no key greater than the passed key will return an iterator pointing to the mp.end();
    
    ```cpp
    
    map<int,int>mp;
    		mp.insert({ 2, 30 });
        mp.insert({ 1, 10 });
        mp.insert({ 5, 50 });
        mp.insert({ 4, 40 });
    
    auto it=mp.lower_bound(2);
    cout<<(*it).second<<endl;
    // output is : 30 
    
    auto it=mp.lower_bound(3);
    cout<<(*it).second<<endl;
    // output is 40          // key is 4 which is immediately greater than 3
    
    auto it=mp.lower_bound(6);
    cout<<(*it).second<<endl;
    // output is 0          // the mp.end()
    ```
    
    based on compare function you can pass the entire map to set to sort it
    
    ```cpp
    struct comp{
        template<typename t>
        bool operator()(const t&l,const t&r) const{
            if(l.second != r.second)
                return l.second>r.second;
            return  l.first<r.first;
        }
    };
    
    map<string,int>mp;
    set<pair<string,int>,comp>st (mp.begin(),mp.end());
    ```
    
    comp is a compare function you declare in your code to sort a container in a particular way 
    
    traditionally it’s not in that way above you can declare it in many ways see [Here](../Compare%20Function/Compare%20Function.md)
    
    you can read about [unordered_map](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/) and [multimap](https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/) containers either
    

---

- **Set**
    
    Sets are a type of **associative container** that don’t accept duplicated values and sort values in ascending or descending order
    
    sets are follow the binary search tree implementation
    
    ```cpp
    #include<set>
    set<int> st;
    st.insert(3);
    st.insert(1);
    st.insert(2);
    st.insert(1);
    
    cout<< st.size(); output : 3 // the last one is duplicated so it will be deleted 
    
    ```
    
    ```cpp
    // iterate over the set: 
    
    for (auto it:st) {
    	cout<<it<<" ";
    }cout<<endl; 
    
    // output  1 2 3 
    ```
    
    set doesn’t allow multiple same values it only accepts a unique value, to take multiple same values you can use [multiset](https://www.javatpoint.com/cpp-multiset)
    
    and also values can’t be modified once you add them to keep values sorted 
    
    you should erase the old value and insert the new one 
    
    ```cpp
    // assign elments from st to st2
    set<int>st2(st.begin(),st.end());
    ```
    
    ```cpp
    // erase elements 
    
    st.erase(2) // remove element with the value 2 in st 
    // output : 1 3 
    
    st.erase (st.begin(),st.find(2)); // remove all elements less than 2 i st 
    // output  2 3 
    ```
    
    you can also use lower bound and upper bound 
    
    if value is not present the function will return the first value greater than it
    when the passed value exceeds the max element the function will return st.end();
    
    ```cpp
    auto it = st.lower_bound(2);
    if(it != st.end()){
    cout<<*it<<endl;  // output is : 2 
    // if 2 is present in the set
    }
    
    //so you need to check 
    if(it != st.end())
    ```
    
    read about [unordered_set](https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/) and don’t forget multiset above 😉