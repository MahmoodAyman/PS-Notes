## Bubble Sort

```cpp
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){  // for passes
        for(int j=0;j<n-i-1;j++){ // Iteration over the array
            if(arr[j]>arr[j+1])swap(arr[j+1],arr[j]); // compare every two elements
        }
    }
}
int main(){
       Balltze();
       int arr[]={6,5,3,4,2,3,6,1};
        bubbleSort(arr,8);
       for(int i=0;i<8;i++)cout<<arr[i]<<" ";
}
```

if array intialy sorted you can stop iteration by using flag and if flag true then the array updated and if not the the array sorted

```cpp
void bubbleSort(int arr[],int n){
    bool flag=0;
    int counter=0;
    for(int i=0;i<n-1;i++){  // for passes
        for(int j=0;j<n-i-1;j++){ // Iteration over the array
            if(arr[j]>arr[j+1])swap(arr[j+1],arr[j]),flag=1; // compare every two elements
        }
        counter++;
        if(!flag)break;
    }

    cout<<"# of passes = "<<counter<<endl; // will print 1 
}
int main(){
       Balltze();
       int arr[]={1,2,3,3,4,5,6,6}; // sorted array 
        bubbleSort(arr,8);
       for(int i=0;i<8;i++)cout<<arr[i]<<" ";
}
```

---