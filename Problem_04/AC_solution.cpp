#include<bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int curr = 0;
        int ans = 0;
        // if the starting direction is left
        for (int i = 0; i < n; i++){
            if (s[i] == '.'){
                ans = max(ans, curr);
            }
            else if (s[i] == '#'){
                curr++;
            }
            else{
                curr = 0;
            }
        }
        curr = 0;
        // if the starting direction is right
        for (int i = n - 1; i >= 0; i--){
            if (s[i] == '.'){
                ans = max(ans, curr);
            }
            else if (s[i] == '#'){
                curr++;
            }
            else{
                curr = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}