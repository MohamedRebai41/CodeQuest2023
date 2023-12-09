#include<bits/stdc++.h>  
using namespace std;

int main() {
    unsigned long long x,y;
    char op;
    cin >> x >> op >> y;
    if(op == '+') cout << x+y;
    else if( op == '*') cout << x*y;
    return 0;
}
