#include<bits/stdc++.h>  
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int n;
    long long l;
    cin >> n >> l;
    vector<int> fights(n);
    for(int i = 0; i < n; i++) cin >> fights[i];
    long long min_bounty = 0, max_bounty = l, ans;
    while(min_bounty <= max_bounty){
        long long current_bounty = (min_bounty + max_bounty) / 2;
        long long current_sum = 0;
        for(int i = 0; i < n; i++){
            current_sum += (current_bounty + current_sum > fights[i] ? 100 : 0);
            if (current_bounty + current_sum > l) break;
        }
        if (current_bounty + current_sum > l) max_bounty = current_bounty - 1;
        else{
            ans = current_bounty;
            min_bounty = current_bounty + 1;
        }
    }
    cout << ans;
    return 0;
}