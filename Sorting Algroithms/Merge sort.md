## Merge Sort

depending on recursive with time O(nlog2(n))

```cpp
void Merge(int arr[],int l,int m,int r){
    int i,j,k;
    int sizeLeft=m-l+1;  // if main array has odd num of elements
    int sizeRight=r-m;
    vector<int>rightArray(sizeRight),leftArray(sizeLeft);
    for( i=0;i<sizeLeft;i++)leftArray[i]=arr[i+l];
    for( j=0;j<sizeRight;j++)rightArray[j]=arr[m+1+j];
    i=j=0;
    k=l; // not zero ? because in sort function I will start from left not zero every time
    while(i<sizeLeft&&j<sizeRight){
        if(leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            i++;
        }
        else{
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }
    while(i<sizeLeft){
        arr[k]=leftArray[i];
        i++;k++;
    }
    while(j<sizeRight){
        arr[k]=rightArray[j];
        j++;k++;
    }
}
void mergeSort(int arr[],int l ,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}
int main(){
       Balltze();
       int arr[]={60,10,20,5,60,70};
        mergeSort(arr,0,5);
       for(int i=0;i<6;i++)cout<<arr[i]<<" ";
}
```

function for divide and conquer and function for sorting