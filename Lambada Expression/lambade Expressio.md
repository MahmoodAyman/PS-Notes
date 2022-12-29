# lambade Expressio
way to type a function anonymously like modern programming languages

or as it called “ unnamed function”.

```cpp
[](){cout<<"this is anonymous function\n";}();
```

### See this example:-

```cpp
int sum(int x,int y){
	return x+y;
}

//---------------------------
int main(){
	auto sum = [] (int x,int y){
		return x+y;
	}; // cause this line now is like any expression and need ; at the end
	cout<<sum(2,5)<<endl; 
}
```

this is the very simple way to write it .. and as you notice that the function has a name?! 

### what about function with different arguments types

### see the example for more clarity:-

```cpp
auto sum = [] (int x,int y){
		if(true)return 2.5; // double return 
		return x+y; // integer return 
	};
```

you will get compiler error cause compiler is confused what should the data type to return 

**is it double or integer?** 

### add something that force the return type:-

```cpp
auto sum = [] (int x,int y) -> int{ // this arrow and datatype will force the function
		if(true)return 2.5; // double return 
		return x+y; // integer return 
	};
```

---

## problem :

given an array count the number of odd numbers in this array 

```cpp
vector <int>v={1,2,3,4,5};
	auto isOdd=[](int x){return x%2;};
	cout<<count_if(v.begin(),v.end(),isOdd);
	// like sort function when passing function to sort based on it 
	// count if will count elements of vector based on isOdd function
```

### or make it anonymous and really unnamed:-

```cpp
vector <int>v={1,2,3,4,5};
cout<<count_if(v.begin(),v.end(),[](int x){return x%2;});
```

```cpp
vector<int>v={3,4,2,5,1};
	sort(v.begin(),v.end(),[](int x,int y){return x>y;});
	for(auto it :v)cout<<it<<" ";
// sort in decreasing order
```

---

### let’s make function more generic!

```cpp
auto sum = [] (auto x,auto y) noexcept { 
// the word noexcept to indicate that this function isn't going through exception
		return x+y;
	};
```

---

## Capture Clause

Remember the [ ]  that we used to type in the syntax of lambada expression? 

this is called capture clause and inside it we can : -

- Pass specific \ All variables by value
- Pass specific \ All variables by Reference
- pass this for class

### Iterate over vector and add to each element some value X : -

```cpp
vector<int>v={1,3,5};
	int x=2;
	auto add =[x](vector<int>&v){
		for(auto &it:v)it+=x;
	};
	add(v); // ofcourse don't forget to call function
	for(auto it:v)cout<<it<< " ";
```

see where I pass the x?

- **X** inside of the function can just be used but you can’t edit it.
cause you pass by value here

you can modify it inside the function only and will not affect out side by using “mutable” keyword:-

```cpp
auto add =[x](vector<int>&v)mutable {
		for(auto &it:v) {
			it += x;
			x = 100;
		}
	};
```

---

now we pass it by reference and we can modify it 

```cpp
	auto add =[&x](vector<int>&v){
		for(auto &it:v)it+=x;
		x+=4;
	};
```

---

```cpp
auto func1 = [=](int x,int y){return x+y;}; // = means pass all by value
	auto func2 = [&](int x,int y){return x+y;}; // & means pass all by refernce 
```

this is a risk but just for your info 

```cpp
int a,b;	
	auto func3=[&,b](int a){return a+b;}; 
// this means passing every thing by reference except b by value
```