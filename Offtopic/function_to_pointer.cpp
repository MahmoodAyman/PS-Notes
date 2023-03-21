// how to assign function to a pointer
// remember cmp function that passed to sort function ?
// how to pass function to function ??

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int (*function_pointer)(int, int);

int compute(int a, int b, int (*function_pointer)(int, int))
{
    return (*function_pointer)(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    function_pointer = &sum;
    int val = (*function_pointer)(a, b);
    val = compute(a, b, mul);
    cout << val << endl;
}