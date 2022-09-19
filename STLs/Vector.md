
# STLs

# Don’t Forget &

---


## Vector

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