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
        if ((k+y)%x==0)
            res=(k+y)/x;
        else
            res=(k+y)/x+1;
        cout << res << endl;
    }
    return 0;
}