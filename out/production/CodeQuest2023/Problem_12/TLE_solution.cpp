#include<bits/stdc++.h>  
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;
    vector<int> fights(n);
    for(int i = 0; i < n; i++) cin >> fights[i];
    for(long long ans = l; ans >= 0; ans--){
        long long current_sum = 0;
        for(int i = 0; i < n; i++){
            current_sum += (ans + current_sum > fights[i] ? 100 : 0);
            if (ans + current_sum > l) break;
        }
        if (ans + current_sum <= l){
            cout << ans;
            return 0;
        } 
    }
    return 0;
}