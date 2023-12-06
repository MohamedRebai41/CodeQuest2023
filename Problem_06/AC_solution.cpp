#include<bits/stdc++.h>
using namespace std;

// Arrays must be long long because integers between -10^9 and 10^9
long long matrix[2002][2002];
long long prefixSum[2002][2002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, q; cin >> n >> m >> q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1];
        }
    }

    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        // min(n - x, m - y) + x and min(n - x, m - y) + y denotes the position of last element in the diagonal associated to x, y
        if (prefixSum[x - 1][y - 1] == prefixSum[min(n - x, m - y) + x][min(n - x, m - y) + y] - prefixSum[x][y]){
            cout << "YES \n";
        }
        else{
            cout << "NO \n";
        }
    }
    return 0;
}