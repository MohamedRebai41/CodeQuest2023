#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0, curr;
        // try all empty spots as starting positions
        for (int i = 0; i < n; i++){
            if (s[i] == '.'){
                curr = 0;
                for (int j = i; j < n; j++){
                    if (s[j] == '#'){
                        curr++;
                    }
                    else if (s[j] == '|'){
                        break;
                    }
                }
                ans = max(ans, curr);
                curr = 0;
                for (int j = i; j >= 0; j--){
                    if (s[j] == '#'){
                        curr++;
                    }
                    else if (s[j] == '|'){
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}