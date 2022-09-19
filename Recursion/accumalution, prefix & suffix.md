## How to calculate the sum of all array which called accumaulation ( in Recursion)

```cpp
int arr_sum(int arr[], int len) {
	if (len == 1)
		return arr[0];

	int sub_result = arr_sum(arr, len - 1);
	return sub_result + arr[len - 1];
}

int main() {
	int arr[] = { 1, 8, 2, 10, 3 };

	cout << arr_sum(arr, 5);

	return 0;
}
```

---

## calculate the prefix of first X elements in array recursively

```cpp
int prefix_sum(int arr[], int len, int n,int start_pos=0){ // there an option if you will not start calc from beginning 
    if(start_pos==n)
        return 0;
    return arr[start_pos] + prefix_sum(arr, len, n, start_pos + 1);
}
int main(){
    int arr[] = {1, 3, 4, 6, 7};
    cout<<prefix_sum(arr,5,3); // calc the sum of first 3 elements 
}
```

### Output:

8

here is the same function without passing len of array

```cpp
int prefix_sum(int arr[], int cnt) {
	if (cnt == 0)
		return 0;

	return arr[0] + prefix_sum_v2(arr+1, cnt - 1);
}
```

---

## now let’s calculate the suffix sum of the last X elements recursively

same logic of prefix sum but reversed 

```cpp
int sufix_sum(int arr[], int len, int cnt) {
	if (cnt == 0)
		return 0;

	return arr[len - 1] + sufix_sum(arr, len - 1, cnt - 1);
}
int main() {
	int arr[] = { 1, 8, 2, 10, 3 };

	cout << sufix_sum(arr, 5, 3);
}
```

### Output:

15