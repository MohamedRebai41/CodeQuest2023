# Problem E - Bounty Challenge

Let's denote by $f(B)$ the value of the bounty after simulating the fights using an initial bounty of $B$

Linearly searching for the answer will have a time complexity of $O(nL)$, which will yield TLE given the constraints

Since for $B_1 < B_2$ we have $f(B_1) < f(B_2)$ ; in other words $f$ is a monotonous function, we can instead use binary search to look for the maximum initial bounty value 
* Our search space is $[0,L]$
* The check we perform in our binary search consists of simulating the process of fights
  * If $f(B) > L$, the solution can only figure in the $[left, mid-1]$ space
  * If $f(B) \leq L$, the solution is valid but we look for a better solution in the $[mid+1, right]$ space since we're looking to maximize the initial bounty B
* The check is performed with a time complexity of $O(n)$ => the overall time complexity of our algorithm is thus $O(nLogL)$
