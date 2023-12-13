#  Problem I - Hidden treasures

In this problem, calculating the sum of integers in the upper part of the diagonal and the sum of integers in the lower part of diagonal for each query has a time complexity of $O(min(n,m).q)$ and will yield a TLE verdict.

For this purpose, to solve the problem, it is required to precompute the prefix sum for each diagonal using the formula: $$prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1]$$

Each diagonal in the newly created matrix is a prefix sum of the elements on that diagonal

Doing this **precomputation** will reduce the complexity of answering each query from a linear time complexity to a constant one $O(1)$

The answer for each query (**x**, **y**) will be a comparison between $prefixSum[x - 1][y - 1]$ : **sum of elements above our element** and $prefixSum[min(n - x, m - y) + x][min(n - x, m - y) + y] - prefixSum[x][y]$: **sum of elements below our element** 

Note:  **min(n - x, m - y) + x** and **min(n - x, m - y) + y** denote the position of last element in the diagonal associated to **(x, y)**.

**Complexity=O(q + n.m)**
