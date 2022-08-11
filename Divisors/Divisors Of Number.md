# Divisors Of Number

## Find Divisors of Number and Push it in Vector

```cpp
// time complixty for this code is O(x)
vector<int>Factors;
void Divisors(int x){
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(i*i==x)Factors.push_back(i);
            else
            {
                Factors.push_back(i);
                Factors.push_back(x/i);
            }
        }
    }
    sort(all(Factors)); // note this just for print Divisors Sorted and you can delete it
}
```

> If sum of digits of Number Divisible by  3 this mean that this number is also divisible by 3 and 9 also have the same Rule
> 

## Prime Factors

```cpp
vector<int>P_Factors;
void Prime_Factors(int x){
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            x/=i;
            P_Factors.push_back(i);
        }
    }
    if(x!=1){
        P_Factors.push_back(x);
    }
    sort(all(P_Factors));
}
```