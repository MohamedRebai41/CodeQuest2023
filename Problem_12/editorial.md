# Problem E - Bounty Challenge


Linearly searching for the answer will have a time complexity of O(nL), which will yield TLE.

We will solve the problem using binary search.

Since the conditions will not be met starting from some value $B+1$, the problem reduces to searching the value $B$ using binary search, simulating the process of fights in each iteration.

 For initial bounty $B$ : after simulating the fights, $B$ will become $B'$. 
    
If $B' > L$, then we look at the left hand side. ($high = mid - 1$). 
    
Else, we update our answer (it satisfies the conditions) and we take the right hand side ($low = mid + 1$).

Time Complexity: $O(nLogL)$