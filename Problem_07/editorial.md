# Problem L - Circle of death

A triangle in a circle is considered a right triangle if its hypotenuse is a diameter of the circle.
So there exists two points such that the distance between them is 1/2 the perimeter of the circle.
for each two points that the distance between them is 1/2 the perimeter of the circle, there exists n-2 right triangles because the third point can be anywhere on the circle.
So now how we will find the distance between all pairs of points ?

First, We will do a prefix sum on the array of distances so we will get the distance between two points in O(1).
Suppose b a vector
$$ b[p]=\sum\_{j=1}^{p}a[j-1] \quad where\quad 1\leq p \leq n, b[0]=0$$

Second, how to find the pairs ?

## Solution 1 : two pointers technique:

We will fixe two indexes i and j and we will move them until we find the distance.
i will start from 0 and j from 1. if b[j]-b[i] = 1/2 perimeter then we will add n-2 to the answer and we will increment i and j else if b[j]-b[i] < 1/2 perimeter then we will increment j because we need to increase the distance between the two points else we will increment i because we need to decrease the distance between the two points.
This solution will take O(n) time.

## Solution 3 : hash table:

We will fixe one index i and we will search for the second index j such that b[j]-b[i] = 1/2 perimeter using hash table.

## Solution 3 : binary search:

We will just fixe one index i and we will search for the second index j such that b[j]-b[i] = 1/2 perimeter using binary search.
This solution will take O(nlogn) time.
