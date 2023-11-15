# Count Sort

### the basic idea of this algorithm is to sort by using frequency array!

```cpp
vector<int>count_sort(vector<int>nums){
    int n = nums.size();
    vector<int>freq(*max_element(nums.begin(),nums.end()) + 1); // add one to count the freq [max_element]
    for(auto &it:nums)freq[it]++; // count the frequency of every element in the array
    vector<int>ans(n);
    
    // now loop on the freq array and print the number that has frequency by order 
    int idx = 0;
    for(int i =0;i<freq.size();i++) {// freq.size() : is the largest element in the array 
        while(freq[i]--){
            nums[idx++] = i;  
        }
    }
    return nums;
}
```

let’s do some tracing :- 

assume array is : 9 5 3 9 5 9 7

- create array of size (max_element + 1) and call it freq;
it’s an array of size 9 + 1 = 10 because array is zero based
    - initially it will be like this :
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
        | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
        | value | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    - then after counting the frequency of every element it will be :
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
        | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
        | value | 0 | 0 | 0 | 1 | 0 | 2 | 0 | 1 | 0 | 3 |
- then loop on the frequency array from 0 → 9 and at every index has frequency loop and print this index (freq[i]) numbers of times

---

the above approach is simple but not stable!
it will perform the same steps at every number in the freq array even the indcies that not has frequencey

so here is an approach that stable:- 

```cpp
vector<int>count_sort_stable(vector<int>nums){
    int n = nums.size();
    vector<int>freq (*max_element(nums.begin(),nums.end()) + 1);
    for(auto &it:nums)freq[it]++;
    for(int i = 1; i < freq.size(); i++)freq[i] += freq[i-1];
    vector<int>output(n);
    for(int i = n-1; i>=0 ; --i){
        output[freq[nums[i]] - 1] = nums[i];
        freq[nums[i]]--;
    }
    return output;
}
```

## again let’s trace :

this time will create the same freq array but will make accumulation to the freq array  : 

- freq array at first will be
    
    
    | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
    | value | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
- then will count frequency normally
    
    
    | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
    | value | 0 | 0 | 0 | 1 | 0 | 2 | 0 | 1 | 0 | 3 |
- then will make accumulation on the array :
    
    
    | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
    | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
    | value | 0 | 0 | 0 | 1 | 1 | 3 | 3 | 4 | 4 | 7 |
- now the point is for example : 
9 has freq 3 starting at position 7 . // in zero-based it will be 6
- array nums =

     0  1  2  3  4  5  6

     9  5  3  9  5  9  7
    - loop on the array starting from last element : i = 6
    output[freq[nums[i]] - 1] 
    nums[i] = 7 & freq[nums[i]] = 4 
    then output[4-1] = output[3];
    this will make element (7) at the index (3) of the output array!
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value |  |  |  | 7 |  |  |  |
    - **loop i =5 :** 
    output[freq[nums[i]] - 1] 
    nums[i] = 9 & freq[nums[i]] = 7 
    then output[7-1] = output[7];
    freq[9] - - ; will make it 6;
    this will make element (7) at the index (3) of the output array!
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value |  |  |  | 7 |  |  | 9 |
    - **loop i = 4**
    nums[i] = 5 & freq[nums[i]] = 3
    output[3 -1] = 5; 
    freq[5] - - ; will make it =1;
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value |  |  | 5 | 7 |  |  | 9 |
    - **loop i =3;**
    nums[i] = 9 & freq[nums[i]] = 6
    output[6 -1] = 5; 
    frq[nums[i]] - -; then freq[9] = 5;
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value |  |  | 5 | 7 |  | 9 | 9 |
    - **i = 2**
    nums[i] = 3 & freq[nums[i]] = 1
    output[1 -1] = 0;
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value | 3 |  | 5 | 7 |  | 9 | 9 |
    - **i =1** 
    nums[i] = 5 & freq[nums[i]] = 2
    output[2 -1] = 1;
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value | 3 | 5 | 5 | 7 |  | 9 | 9 |
    - **i = 0**
    nums[i] = 9 & freq[nums[i]] = 5
    output[5 -1] = 4;
        
        
        | index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
        | --- | --- | --- | --- | --- | --- | --- | --- |
        | value | 3 | 5 | 5 | 7 | 9 | 9 | 9 |
        
    
    ---