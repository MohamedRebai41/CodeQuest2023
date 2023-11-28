#include<bits/stdc++.h>  
using namespace std;

int matrix[1001][1001];
// this prefix arrays must be long long because numbers are so large (up to 10^9)
long long prefixRows[1001][1001]; // this serves as a prefix sum for the rows; prefixRows[i][j] = prefix sum in column i for the row j
long long prefixColumns[1001][1001]; // this serves as a prefix sum for the columns; prefixColumns[i][j] = prefix sum in row i for the column j

int main() {
    int n, m, q; cin >> n >> m >> q;
    for (int i = 1; i <= n; i++){
        for (int i = 1; j <= m; j++){
            cin >> matrix[i][j];
        }
    }
    // Calculating the prefix sum for rows and columns
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            prefixRows[i][j] = prefixRows[i][j - 1] + matrix[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            prefixColumns[i][j] = prefixColumns[i][j - 1] + matrix[i][j];
        }
    }

    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        if (prefixRows[y][x - 1] + prefixColumns[x][y - 1] == (prefixRows[y][n] - prefixRows[y][x] + prefixColumns[x][m] - prefixColumns[x][y])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}