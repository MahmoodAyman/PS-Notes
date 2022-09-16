# Flatten Array

## what is flatten?

Flattening an array is a process of reducing the dimensionality of an array. In other words, it a process of reducing the number of dimensions of an array to a lower number.

### see this 2d Array:

`[1, 2, 3]`

`[4, 5]`

`[6, 7, 8]`

### when flattened would look like:

`[1, 2, 3, 4, 5, 6, 7, 8]`

## Method one:

```cpp
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define endl "\n"

int arr[100][100];

int main() {
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    int flattened[rows * cols]; // sometimes it will not work... depends on compiler
    int n = rows * cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int idx = i * rows + j; // The index in the one dimensional array corresponds to the same index in the array    
            flattened[idx] = arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << flattened[i] << " ";
    }
}
```

---

### let’s try it on vector:

will be easier cause you don’t need to set size

```cpp

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
#define endl "\n"
int main() {
    Fast();
    int rows, cols;
    cin>>rows>>cols;
    vector<vector<int>>v(rows,vector<int>(cols));
    for(auto &row:v){ // use for each to take input but not to create flattened array
        for(auto &col:row){ // don't forget you need to know index :"D
            cin>>col;
        }
    }
    vector<int>flattened;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            flattened.emplace_back(v[i][j]); // you use vector, so you don't need to set initial size
                                          // you can use push or emplace back function direct
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int i=0;i<flattened.size();i++){
        cout<<flattened[i]<<" ";
    }
}
```

---

### see without take input or size of vector?

```cpp
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
#define endl "\n"
int main() {
    Fast();
    vector<vector<int>>v{ { 1, 2 },
                          { 3 },
                          { 4, 5, 6 },
                          { 7, 8, 9, 10 } };
    vector<int>flattened;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            flattened.emplace_back(v[i][j]); // you use vector, so you don't need to set initial size
                                          // you can use push or emplace back function direct
        }
    }

    for(auto row:v){
        for(auto col:row){
            cout<<col<<" ";
        }
    }

    cout<<endl;
    for(int i=0;i<flattened.size();i++){
        cout<<flattened[i]<<" ";
    }
}
```