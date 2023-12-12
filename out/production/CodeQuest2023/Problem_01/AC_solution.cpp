#include<bits/stdc++.h>  
using namespace std;

int main() {
    string s;
    int N;
    string msg = "NO";
    cin >> N;
    cin >> s;
    for(int i = 0 ; i < N; ++i){
        if(s[i] == 'W')
        {
            msg = "YES";
            break;
        }
    }
    cout << msg;
    return 0;
}
