

## Set

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