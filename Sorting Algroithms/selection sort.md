## Selection Sort

take o(n^2) time complixity  but in-place so o(1) space   

```cpp
void selectionSort(int arr[],int n){
    int mnIdx=0;
    for(int i=0;i<n-1;i++){
        mnIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mnIdx]){
                mnIdx=j;
            }
        }
        swap(arr[mnIdx],arr[i]);
    }
}
int main(){
       Balltze();
       int arr[]={6,5,3,4,2,3,6,1};
       selectionSort(arr,8);
       for(int i=0;i<8;i++)cout<<arr[i]<<" ";
	}
```

---
