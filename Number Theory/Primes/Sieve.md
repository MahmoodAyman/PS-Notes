# Sieve

## Ordinary Sieve

take n(log(log n)) time  which is great 
the inside loop run as n/2 + n/3 + n/4 + n/5 …. till end 

```cpp
bool composite[100000];
void ordinary_Sieve(){
    composite[0]=composite[1]=1;
    for(int i=2;i<=100;i++){
        if(!composite[i]){
            for(int j=i*i;j<=100;j+=i){
                composite[j]=1;
            }
        }
    }
}
```

but this may be some primes has the same factors or multiples so ordinary Sieve will iterate over same number more than one 

what is the optimization? 

## Linear Sieve

time analysis is O(n) time 

```cpp
bool composite[100000];
vector<int> primes;
void linear_Sieve() {
    composite[0] = composite[1] = 1;
    for (int i = 2; i <= 100; i++) {
        if (!composite[i])primes.emplace_back(i);
        for (int j = 0; j < primes.size() && i * primes[j] <= 100; j++) {
            composite[primes[j] * i] = 1;
            if (i % primes[j] == 0)break;
        }

}
}
```

linear sieve will iterate over the number one time only and also will iterate over numbers less than max value yo wan