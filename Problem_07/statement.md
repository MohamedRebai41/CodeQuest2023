# Welcome to StackEdit!

In the adventurous world of One Piece, our crew of intrepid pirates stumbled

upon a curious challenge. Scattered across a mystical island were various points

forming a circle. The task at hand: figure out how many different right triangles

could be crafted from these points. The catch? The crew needed to count the number

of unique trios of points, making sure each set was distinct. Can the crew navigate

through this geometric puzzle and uncover the secrets hidden within the

isle's mathematical shores?

## Input Format

The first line contains an integer n(1 ≤ n ≤100000), the number of points.

The second line contains n space-separated integers aᵢ(1≤aᵢ≤10^9) -- the **length of the arc** between point i and point i+1 (for 1≤i≤n−1), and aₙ is the distance between the point number n and the first point.

## Output Format

for each test case print the number of unique right triangles that can be formed.

## Example:

Input :

```
4
3 2 1 4
```

Output :

```
2
```

Input :

```
3
1 2 3
```

Output :

```
1
```
