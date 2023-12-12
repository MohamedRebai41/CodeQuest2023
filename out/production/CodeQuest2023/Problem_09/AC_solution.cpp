#include<bits/stdc++.h>  
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        // the arrays counts the respective occurence of A,B, AB and O
        vector<int> injured(4,0);
        vector<int> donors(4,0);
        for(int i=0;i<n;i++)
        {
            string s; cin >> s;
            if (s == "A") injured[0]++;
            else if (s == "B") injured[1]++;
            else if (s == "AB") injured[2]++;
            else if (s == "O") injured[3]++;
        }
        for(int i=0;i<n;i++)
        {
            string s; cin >> s;
            if (s == "A") donors[0]++;
            else if (s == "B") donors[1]++;
            else if (s == "AB") donors[2]++;
            else if (s == "O") donors[3]++;
        }
        // we first check if we can satisfy the injured of blood type O
        if(injured[3] <= donors[3])
        {
            donors[3]-=injured[3];
        }
        else 
        {
            cout << "NO" << endl;
            continue;
        }
        // then we check if we can satisfy the injured of blood type B
        if(injured[1] <= donors[1] + donors[3])
        {
            donors[1] = max(donors[1] - injured[1],0);
            donors[3] -= max(injured[1] - donors[1],0);
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        // then we check if we can satisfy the injured of blood type A
        if(injured[0] <= donors[0] + donors[3])
        {
            donors[0] = max(donors[0] - injured[0],0);
            donors[3] -= max(injured[0] - donors[0],0);
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        //if A, B , O are all satisfied then AB is satisfied
        cout << "YES" << endl;

    }
    return 0;
}