# Sorting Algorithms

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