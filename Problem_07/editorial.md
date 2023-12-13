# Problem L - Circle of death

**A triangle in a circle is a right triangle if and only if its hypotenuse is a diameter of the circle.**

Given the input, we need to find all the two points that form a diameter of the circle: all the pairs of points where the length of the arc between them is half of the circle's perimeter

For each such pair of points, there exists $n-2$ unique right triangles because the third point can be any of the remaining points.

So the problem becomes: How should we find these pairs of points ?

First, we build a **prefix sum array** of the arc lengths => this allows us to find the length of the arc between any two points in $O(1)$

Suppose b this array:
$$b[p]=\sum\_{j=1}^{p}a[j-1] \quad where\quad 1\leq p \leq n, b[0]=0$$

Second, how to find the pairs ?

We can perform a linear search for every value in the prefix sum array but the time complexity would be $O(n²)$. This will yield a TLE verdict given our constraints 

## Solution 1 : two pointers technique:

We will fix two indexes i and j and we will move them until we find the distance.

i will start from 0 and j from 1. if $(b[j]-b[i] = (1/2)perimeter)$ then we will add $n-2$ to the answer and we will increment i and j else if $(b[j]-b[i] < (1/2)perimeter)$ then we will increment j because we need to increase the distance between the two points else we will increment i because we need to decrease the distance between the two points.

Time complexity: $O(n)$ .

This solution has the same logic as the [Two Sum problem](https://www.geeksforgeeks.org/check-if-pair-with-given-sum-exists-in-array/)

## Solution 3 : hash table:

We put all the values of the prefix sum array into a **hash table**. For each value b[i] , we can search for $(b[i] + (1/2)perimeter)$ in the hash table in $O(1)$ time complexity

Time complexity: $O(n)$

## Solution 3 : binary search:

For each b[i], we search for the value $(b[i] + (1/2)perimeter)$ using binary search $O(logn)$

Time complexity: $O(nlogn)$
