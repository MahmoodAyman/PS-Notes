## Insertion Sort

depending on shifting elements not swaps 

```cpp
void insertionSort(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
       Balltze();
       int arr[]={7, 3 , 4 ,5, 1, 8 ,10,2};
        insertionSort(arr,8);
       for(int i=0;i<8;i++)cout<<arr[i]<<" ";
}
```

---
