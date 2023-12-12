#include<bits/stdc++.h>  
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        int res=0;
        if ((k+y-1)%x==0)
            res=(k+y-1)/x;
        else
            res=(k+y-1)/x+1;
        cout << res << endl;
    }
    return 0;
}