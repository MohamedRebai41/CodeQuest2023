#include<bits/stdc++.h>  
using namespace std;

int main() {
    string s;
    string msg = "NO";
    cin >> s;
    for(int i = 0 ; i < s.size(); ++i){
        if(s[i] == 'W')
        {
            msg = "YES";
            break;
        }
    }
    cout << msg;
    return 0;
}
