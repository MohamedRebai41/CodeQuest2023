#include<bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool test = false;
        
        for(int r = 0; r < 11; r++)
        {
            if((n-111*r)>=0 && ((n-111*r) % 11 == 0))
            {
                test = true;
                break;
            }
        }

        if(test) cout << "YES" << endl;
        else cout <<"NO"<< endl;
    }
    return 0;
}