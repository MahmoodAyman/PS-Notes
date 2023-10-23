# STLs

# Don’t Forget &

---

## array

there is an array in the STLs and I don't mean the original one

```cpp
array<int,7>arr;
// first thing it must have an constant size which is 7 here
const int N = 100;
array<int,N>arr;

```

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

vector<int>v4(v3); // copy v3 vector to the new one

v.capacity(); // initially zero and it double itself every time it's full

/*
Example:
v.push_back(1);  // 1
capacity = 1 & size = 1;
v.push_back(2); // 1 2
capacity = 2 & size = 2;
v.push_back(3); // 1 2 3
capacity = 4 & size = 3;
every time reach to the end capacity it doubled to  decrease the time
*/

v.reserve(100);
// you can use this function to decrease the time till the you fill 100 elements

for(auto &it:v) cout<<it<<" "; // print all values
v.at(0); = v[0]; //same to access element number 0

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
