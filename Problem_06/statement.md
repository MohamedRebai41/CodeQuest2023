# Problem A : Hidden Treasures

## Statement:



Nami is the navigator of the Straw Hat Pirates in "One Piece", and one of her primary skills is cartography. 

She has recently drawn a map for her team, this map is a matrix of dimensions **n×m**, where **n** and **m** denote the number of rows and columns respectively, composed of integers. This matrix serves as a guide to predict positions of hidden treasures.
<!-- todo: make this description clearer -->
Let's define the diagonals of our matrix as the lines formed by selecting elements starting either from **the first row** and **any column j** (1≤j≤m) or from **any row i** (1≤i≤n) and **the first column** and passing by elements **M[i+1][j+1]** ensuring that **i+1≤n** and **j+1≤m**. 

More formally the diagonals are defined as follows:
- Main diagonal: diagonal starting from element (1, 1) and passing through elements (d, d) for 1≤d≤min(n, m).
- Upper diagonals: diagonals starting from elements (1, 1+d) and passing through elements (k, k+d) for 1≤k≤n, 1≤d<m, k+d<m.
- Lower diagonals: diagonals starting from elements (1+d, 1) and passing through elements (k+d, k) for 1≤k≤m, 1≤d<n, k+d≤n.

The diagram below illustrates the diagonals of a **3×4** matrix:
<div style="font-weight: 700; text-align: center">
        <table>
          <tr>
            <td style="background-color: grey">1</td>
            <td>2</td>
            <td style="background-color: lightgrey">3</td>
            <td>4</td>
          </tr>
          <tr>
            <td>5</td>
            <td style="background-color: grey">6</td>
            <td>7</td>
            <td style="background-color: lightgrey">8</td>
          </tr>
          <tr>
            <td style="background-color: lightgrey">9</td>
            <td>10</td>
            <td style="background-color: grey">11</td>
            <td>12</td>
          </tr>
        </table>
</div>
(elements 1, 6 and 11 make a diagonal, element 4 makes a diagonal by itself too...)

A position **(x, y)** in our **matrix(n, m)** may contain a treasure if the sum of integers of the elements in the diagonal that contain that element from the starting of the diagonal reaching the element before it(the upper part of that diagonal) is equal to the sum of integers in that same diagonal starting from the next point reaching the end of the diagonal(the lower part of that diagonal).
<br>More formally **&Sigma;<sub>elements(i, j)∈diagonal containing(x, y) | i<x, j<y</sub> M[i][j] = &Sigma;<sub>elements(i', j')∈diagonal containing(x, y) | x<i', y<j'</sub> M[i'][j']**.

The digram below shows an example of a matrix **4×4**, and the position **(3, 3)**:
<div style="font-weight: 700; text-align: center">
        <table>
          <tr>
            <td style="background-color: grey">9</td>
            <td>4</td>
            <td>7</td>
            <td>8</td>
          </tr>
          <tr>
            <td>6</td>
            <td style="background-color: grey">5</td>
            <td>0</td>
            <td>3</td>
          </tr>
          <tr>
            <td>11</td>
            <td>4</td>
            <td>2</td>
            <td>5</td>
          </tr>
            <tr>
            <td>10</td>
            <td>3</td>
            <td>8</td>
            <td style="background-color: lightgrey">14</td>
          </tr>
        </table>
</div>
In this example (3, 3) is the desired position (it contains the number 2), the first sum is 9 + 5 = 14, the second sum is 14; since both sums are equal, the answer is YES.

You will be given the matrix, and q queries, for each query you will be given a position **(x, y)** and you have to output **"YES"** if that position can contain a treasure, and **"NO"** otherwise.


## Input :
The first line contains 3 integers **n**, **m** (2≤n, m≤10<sup>3</sup>), number of rows and number of columns of our matrix respectively and **q** queries (1≤q≤10<sup>6</sup>).

The next n lines each contain m integers seperated by spaces describing rows of the matrix. Each integer of the matrix **a<sub>i,j</sub>** &isin; [-10<sup>9</sup>, 10<sup>9</sup>].

The next q lines each contain 2 integers **x** and **y** (1≤x≤n, 1≤y≤m), a specific row and column of our matrix respectively.


## Output :
For each query, output **"YES"**(without quotes) if the position **(x, y)** can contain a treasure, and **"NO"**(without quotes) otherwise.

## Example:
Input :  

```
4 4 4
9 4 7 8
6 5 0 3
11 4 2 5
10 3 8 14
1 4
3 3
3 2
4 2
```

Output :  

```
YES
YES
NO
NO
```
## Note:
In the **first** query the answer is NO because both sum are equal to 0 (there are no elements in the upper or lower part of the diagonal).
<br>In the **second** query the answer is YES because: 9 + 5 **=** 14.
<br>In the **third** query the answer is NO because: 6 **#** 8.
<br>In the **fourth** query the answer is NO bcause: 11 **#** 0 (there are no elements in the lower part of the diagonal).