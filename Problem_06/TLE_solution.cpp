#include<bits/stdc++.h>
using namespace std;

int matrix[2002][2002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m, q; cin >> n >> m >> q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> matrix[i][j];
        }
    }

    for (int k = 0; k < q; k++){
        int x, y;
        cin >> x >> y;
        long long upper_sum = 0;
        long long lower_sum = 0;
        for (int i = x - 1, j = y - 1; i >= 0 and j >= 0; i--, j--){
            upper_sum += matrix[i][j];
        }
        for (int i = x + 1, j = y + 1; i <= n and j <= m; i++, j++){
            lower_sum += matrix[i][j];
        }
        if (upper_sum == lower_sum){
            cout << "YES \n";
        }
        else{
            cout << "NO \n";
        }
    }
    return 0;
}