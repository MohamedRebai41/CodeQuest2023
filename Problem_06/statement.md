# Problem A : Hidden Treasures

## Statement:



Nami is the navigator of the Straw Hat Pirates in "One Piece", and one of her primary skills is cartography. 

She has recently drawn a map for her team, this map is a matrix of dimensions **n×m**, where **n** and **m** denote the number of rows and columns respectively, composed of integers. This matrix serves as a guide to finding hidden treasures.

A position **(x, y)** in our **matrix(n, m)** may contain a treasure if the sum of integers in the sub-matrix from the top-left corner **(0, 0)** to the bottom-right corner **(x, y)** is equal to 0.
<br>More Formally: i=0 ∑ x j=0 ∑ y M[i][j]=0

This diagram shows an example.


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
3 4 3
5 2 -3 7
5 -1 -8 0
1 4 9 5
1 2
2 3
3 3
```

Output :  

```
NO
YES
NO
```
## Note:
In the **first** query the answer is no because: 5 + 2 **#** 0
<br>In the **second** query the answer is yes because: 5 + 2 - 3 + 5 - 1 - 8 **=** 0