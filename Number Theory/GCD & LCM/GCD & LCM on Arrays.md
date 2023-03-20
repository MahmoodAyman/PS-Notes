## GCD in Arrays:

gcd (a, b, c) =  gcd(a, gcd(b, c)) = gcd(gcd(a, b), c) = gcd(gcd(a, c), b) 

from the line above we can see if we start with first element and take gcd between every two elements

see how: 

```cpp
long long gcd(long long int a, long long int b)
{
	  if (b == 0)
    return a;
	  return gcd(b, a % b);
}
int main() {
	int n; cin>>n;
	vector<int>v(n);
	for(auto &it:v)cin>>it;
	int G=v[0];
	for(int i=1;i<n;i++){
		G=gcd(G,v[i]);
	}
	cout<<G<<endl;
}
```

in a function will be: 

```cpp
long long gcd(long long int a, long long int b)
{
	  if (b == 0)
    return a;
	  return gcd(b, a % b);
}
long long findGCD(int arr[], int n) // array and it's size
{
int G = arr[0];
for (int i = 1; i < n; i++)
{
	G = gcd(arr[i], G);

	if(G == 1)
	{
	return 1;
	}
}
return G;
}
```

---

## LCM of array:

lcm (a, b) = (a*b)/ GCD(a, b) 

but lcm (a, b, c) ≠ (a*b*c) / GCD (a, b, c) 

instead use this function: 

```cpp
long long gcd(long long int a, long long int b) // gcd function 
{ 
	  if (b == 0)
    return a;
	  return gcd(b, a % b);
}
long long lcm(int a, int b) // lcm function 
{
    return (a / gcd(a, b)) * b;
}
long long findLCM(int arr[], int n) // find lcm of array function
{
    long long ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = lcm(ans,arr[i]);

    return ans;
}
```