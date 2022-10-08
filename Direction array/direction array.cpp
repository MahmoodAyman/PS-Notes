// better way to iterate over the neighbors of a cell in 2d array 
#include<bits/stdc++.h>

using namespace std;
// direction arrays
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
int arr[100][100];

// is valid function
bool isValid(int r, int c, int n, int m) {
    // assume n,m are your bounds
    return (r >= 0 && r < n && c < m && c >= 0);
}
// use validation before the rest of functions 
// four neighbours of arr[r][c];
void four_neighbours(int r, int c) {
    for (int i = 0; i < 4; i++) {
        arr[r + dr[i]][c + dc[i]];
    }
}
//eight neighbours
// smarter way to create 8 neighbours than direction array
void eight_neighbours(int r,int c){
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(i==0 && j==0)continue;
            arr[r+i][c+j];
        }
    }
}
// for 24 let loops from -2 to 2 and discard when i==j==0

int main() {
}