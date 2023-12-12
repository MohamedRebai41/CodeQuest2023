// C++ implementation of Hopcroft Karp algorithm for
// maximum matching
#include<bits/stdc++.h>
using namespace std;


vector<int> visited;


bool match(int pos, vector<vector<int>> &adj)
{
    if(pos == adj.size()) return true;
    for(int x : adj[pos])
    {
        if(!visited[x])
        {
            visited[x] = true;
            if(match(pos+1, adj)) return true;
            visited[x] = false;
        }
    }
    return false;
}




// Main
int main()
{
    //getting input
    int n,m; cin >> n >> m;
	
    vector<vector<int>> inj(26) , don(26);

    for(int i=0;i<n;i++) 
    {
        char x;
        cin >> x;
        inj[(int)(x-'A')].push_back(i);
    }
    for(int i=0;i<n;i++) 
    {
        char x;
        cin >> x;
        don[(int)(x-'A')].push_back(i);
    }



    //building bipartite graph 
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i){
        char x,y; cin >> x >> y;
        int ia = (int)y - 65;
        int ib = (int)x - 65;
        for(auto a: inj[ia])
        {
            for(auto b: don[ib])
            {
                adj[b].push_back(a);
            }
        }
    }

    for(int i=0; i<26;i++)
    {
        for(auto a: inj[i])
        {
            for(auto b: don[i])
            {
                adj[b].push_back(a);
            }
        }
    }

    visited.resize(n,false); 

    if(match(0,adj)) cout << "YES" <<endl;
    else cout << "NO" << endl;

}
