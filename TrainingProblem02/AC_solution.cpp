#include<bits/stdc++.h>  
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0 ; i < N; ++i){
        int len,rep;
        string s = "", input;
        cin >> len >> input >> rep;
        for( int j = 0 ; j < rep ; ++j){
            s += input;
        }
        cout << s << endl;   
    }
    return 0;
}
