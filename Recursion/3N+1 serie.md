## 3N + 1 series one of the common series in math

in general we mean if the number is even we divide it by 2 

and if the number odd we will multiply it by 3 and add 1 

it run till we reach to **1**

---

Now the problem is give you a number and count how many steps you need to reach **one** by using the logic of 3N + 1  series  ****

```cpp
int three_N_series(int n) {
    if (n == 1)return 1; // last step and the base case
    if (n % 2 == 0) {
        return 1 + three_N_series(n / 2);
    } else {
        return 1 + three_N_series(3 * n + 1);
    }
}

int main() {
    int b;
    cin >> b;
    cout << three_N_series(b) << endl;
} // input 6 
```

### Output:

9