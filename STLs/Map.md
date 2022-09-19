## Map

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