#  Problem I - Hidden treasures

In this problem we can't calculate the sum of integers in the upper part of the diagonal and the sum of integers in the lower part of diagonal for each query since the constraints are huge.

For this purpose, to solve the problem, it is required to precompute the prefix sum for each diagonal using the formula: **prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1]**

And then for each query we will get the answer in **O(1)**. The answer for each query (**x**, **y**) will be a comparison between **prefixSum[x - 1][y - 1]** (sum of elements above our element) and **prefixSum[min(n - x, m - y) + x][min(n - x, m - y) + y] - prefixSum[x][y]**(sum of elements below our element) where **min(n - x, m - y) + x** and **min(n - x, m - y) + y** denotes the position of last element in the diagonal associated to **(x, y)**.

**Complexity=O(q + n.m)**