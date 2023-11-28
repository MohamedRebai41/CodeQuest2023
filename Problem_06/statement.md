# Problem A : Image classification

## Statement:



Nami is the navigator of the Straw Hat Pirates in "One Piece", and one of her primary skills is cartography. 

She has recently drawn a map for her team, this map is a matrix composed of integers. This matrix is servers as a guide to finding hidden treasures.

A position **(x, y)** in our **matrix(n, m)** (**n** and **m** are the number of rows and columns respectively) can contain a treasure if the sum of integers in row **x** from column **1** to column **(y - 1)** + the sum of integers in column **y** from row **1** to row **(x - 1)** is equal to the sum of integers in row **x** from column **(y + 1)** to column **m** + the sum of integers in column **y** from row **(x + 1)** to row **n**.
<br>More Formally.....

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
5 2 3 7
5 1 5 0
1 4 9 0
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
In the **first** test case the answer is no because: 5 **#** 3 + 7 + 1 + 4.
<br>In the **second** test case the answer is yes because: 5 + 1 + 3 **=** 0 + 9.