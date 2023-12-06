

# Problem A : Hidden Treasures

## Statement:



Nami is the navigator of the Straw Hat Pirates in "One Piece", and one of her primary skills is cartography.

She has recently drawn a map for her team, this map is a matrix of dimensions **n×m**, where **n** and **m** denote the number of rows and columns respectively, composed of integers. This matrix serves as a guide to predict positions of hidden treasures.


The diagonals of a matrix are defined as follows:
- **Main diagonal**: diagonal starting from element (1, 1) and passing through elements (d, d) for 1≤d≤min(n, m).
- **Upper diagonals**: diagonals starting from elements (1, 1+d) and passing through elements (k, k+d) for 1≤k≤n, 1≤d<m, k+d<m.
- **Lower diagonals** : diagonals starting from elements (1+d, 1) and passing through elements (k+d, k) for 1≤k≤m, 1≤d<n, k+d≤n.

Each element is then part of only one diagonal.

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

Elements 1, 6 and 11 make a diagonal, Element 4 makes a diagonal by itself too...

An element of position **(x, y)** contains a treasure if and only if it divides the diagonal into two parts with equal sum. In other words, the sum the elements above our element in the diagonal is equal to the sum of elements under our element in the diagonal.

<br>More formally **&Sigma;<sub>elements(i, j)∈diagonal containing(x, y) | i<x, j<y</sub> M[i][j] = &Sigma;<sub>elements(i', j')∈diagonal containing(x, y) | x<i', y<j'</sub> M[i'][j']**.



You will be given the matrix, and q queries, for each query you will be given a position **(x, y)**
Output **"YES"** if that position contains a treasure, and **"NO"** otherwise.


## Input :
The first line contains 3 integers **n**, **m** $(2≤n, m≤2.10^3)$, number of rows and number of columns of our matrix respectively and **q** queries $(1≤q≤10^6)$.

The next n lines each contain **m** space separated integers describing rows of the matrix. Each integer of the matrix  $a_{ij}$ $(-10^9 \leq a_{ij} \leq 10^9)$

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
<div style="font-weight: 700; text-align: center">
        <table>
          <tr>
            <td>9</td>
            <td>4</td>
            <td>7</td>
            <td>8</td>
          </tr>
          <tr>
            <td>6</td>
            <td>5</td>
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
            <td>14</td>
          </tr>
        </table>
</div>

In the **first** query the answer is YES because both sum are equal to 0 (there are no elements in the upper or lower part of the diagonal).
<br>In the **second** query the answer is YES because: 9 + 5 **=** 14. (m[1][1] + m[2][2] = 14 and m[4][4] = 14)
<br>In the **third** query the answer is NO because: m[2][1] = 6 $\neq$ m[4][3] = 8.
<br>In the **fourth** query the answer is NO bcause: m[3][1] = 11 $\neq$ 0 (there are no elements in the lower part of the diagonal).


## Important

Since the input/output for this problem can be very large, you need to use **fast input/output** to optimize performance, it is listed below how to do so for the available programming languages:

* **C++**: 

Add these lines to your code:
 ```
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```
Instead of using **endl** for a new line, use **"\n"**

* **Python**: Import sys library
``` 
//input
sys.stdin.readline()
//output
sys.stdout.write("YES\n")
sys.stdout.write("NO\n")
```

**Java**: Use the buffered reader and buffered writer classes
Import these java classes: java.io.BufferedReader; java.io.InputStreamReader; java.io.BufferedWriter; import java.io.OutputStreamWriter; java.util.StringTokenizer;
```
BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
```
For each line, create a string tokenizer:
```
StringTokenizer tokenizer = new StringTokenizer(reader.readLine());
```
To get a value use:
``` 
tokenizer.nextToken();
Integer.parseInt(tokenizer.nextToken()); //for example
```
