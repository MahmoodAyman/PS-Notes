## Function to Calculate Big Factorial

```cpp
#include<bits/stdc++.h>
using namespace std;
void factorial(vector<int> &v, int x) /* passing with reference so that changes also occur in original vector */
{
    int carry = 0; /* initially carry will be 0 */

    /* doing fundamental way of multiplication */
    for(int i = 0; i < v.size(); i++)
    {
        int digit_product = v[i]*x + carry;
        carry = digit_product / 10;
        v[i] = (digit_product % 10);
    }

    /* handling if carry remains */

    while(carry)
    {
        v.push_back(carry % 10);
        /* push_back() adds number at the end of vector but in multiplication we put carry in front
        so we need to reverse the vector to get the correct answer */
        carry /= 10;
    }
}
int main() {
    int n;
    cin >> n;

    vector <int> ans; /* vector to store answer */
    ans.push_back(1);

    for(int i = 2; i <= n; i++) /* looping from 2 to n */
    {
        factorial(ans, i); /* passing vector and i to multiply the number in vector with i */
    }

    reverse(ans.begin(), ans.end()); /* reversing the vector to get the correct answer */

    for(auto i:ans)
        cout<<i;
}
```