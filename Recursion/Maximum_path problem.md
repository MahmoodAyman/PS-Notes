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

---

what if you can go in a 3 directions from a cell?

how would you solve it?


### problem statement

Given a 2D array of numbers, all of them are positive distinct. Robot start from
(0, 0). It can move to the right or left or diagonal. It will select one direction:
the maximum. Print the total path sum of this robot

```cpp
int n, m;
int arr[100][100];
int di[] = {1, 0, 1}; // direction arrays to take (1,0) for new row
int dj[] = {0, 1, 1}; // (0,1) for new col and (1,1) for diagonal 
// trace it in the code for better understanding

int max_path(int arr[100][100],  int Rows, int Cols,int row = 0, int col = 0) {
    int res = arr[row][col];
    if (row == Rows - 1 && col == Cols - 1)return res;
    int max_idx = -1, max_value = -1;
    for (int i = 0; i < 3; i++) {
        // choose the new place
        int new_row = row + di[i];
        int new_col = col + dj[i];
        // check if this place inside the array
        if (new_row >= Rows || new_col >= Cols)continue;
        // check which one of the direction is the greatest
        // and you need to save it's i,j
        if (max_value < arr[new_row][new_col]) {
            max_value = arr[new_row][new_col];
            max_idx = i; // i of the loop
        }
    }
    int final_row = row + di[max_idx],
            final_col = col + dj[max_idx];
    return res + max_path(arr, final_row, final_col, Rows, Cols);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << max_path(arr, n, m); // see you don't need to path your initial values
}

/* test: 
 * 3 3
 * 1 7 8
 * 2 10 11
 * 20 5 9
 * */
```

### ouput:

31