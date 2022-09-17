### problem statement



`Given a matrix A of size N*M. Print the **maximum sum** of numbers that can be obtained when you take a path from A[1][1]  to A[N][M].`

`If you stay in A [i] [j] A [i] [j] you can only go to :`

- `Ai+1,j if and only if A [i+1] [j] i≤N`
- `Ai,j+1 if and only if A [i] [j+1]  j≤M`

```cpp
#include<bits/stdc++.h>
using namespace std;
int n, m;
int arr[12][12];
int tot = 0;

int max_path(int i, int j) {
    if (i == n - 1 && j == m - 1)return arr[i][j];
    else if (i < n - 1 && j < m - 1) {
        int sum = max(max_path(i + 1, j), max_path(i, j + 1));
        tot = arr[i][j] + sum;
    } else if (i == n - 1) {
        tot = arr[i][j] + max_path(i, j + 1);
    } else {
        tot = arr[i][j] + max_path(i + 1, j);
    }
    return tot;
}

int main() {
    Fast();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << max_path(0, 0);
}
```