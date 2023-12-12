# Problem L - Circle of death

First, to determine how many right triangles in the circle we need to know how many points in the circle that the length of the arc between this two points is 1/2 permieter of the circle.

So, we will calculate the perimeter of the circle by summing the length of the arc between each adjacent points in the circle

$$ \sum\_{i=1}^{n} a[i] $$
If the sum is odd then the number of right triangles is 0 because we can't get two points that the length of the arc between them is 1/2 of the perimeter of the circle.

else if the sum is even then we will compute how many points in the circle that the length of the arc between this two points is 1/2 permieter of the circle.

We will create a vector of distances between the first point and the other points in the circle

Let suppose that the vector is b, so b[0]=0, b[1] = distance between first point and second point, b[2] = distance between first point and third point, and so on.

$$ b[p] = \sum\_{i=1}^{p} a[i-1] ,b[0]=0,1\leq p \leq n $$
Now Let dis = sum/2 and ans = 0

Now , we will iterate over the vector b , we will fixe at first two indexes i and j where i=0 and j=1

If b[j] - b[i] < dis then we will increment j by one to get bigger distance between the first point and the second point

Else if b[j] - b[i] > dis then we will increment i by one to get smaller distance between the first point and the second point

Else if b[j] - b[i] = dis then we will increment ans by n-2 (n the number of points) because we will have n-2 right triangles with the first point and the second point and increment both i and j with one

At the end we will print ans
