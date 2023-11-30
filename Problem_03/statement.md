# Problem C : Finding the Lost Treasure

## Statement:

Luffy, a passionate adventurer, recently acquired a legendary and valuable treasure map leading to the hidden One Piece. Eager to share his discovery,Luffy invited his **n** Nakama (friends) to The Going Merry, where he proudly displayed the map.

The Nakama, **one by one**, entered and exited the room. At no point were there more than one friend in the room. In other words, the first friend entered and left first, then the second, and so on.

At the beginning (before any friend visited), **the One Piece map was in the room**.However, by the end (after the n-th friend), **the map mysteriously vanished**.The exact moment of disappearance remains shrouded in uncertainty.

Determined to identify the felon, Luffy questioned his friends one by one in the same order they visited the map. Each friend was asked if the map was still there when they entered. Each friend answered one of three answers:

- No (response encoded with **0**)
- Yes (response encoded with **1**)
- Can't remember (response encoded with **?**)

Everyone except the thief either doesn't remember or **told the truth**. The thief, however, **can say anything** (any of the three options).

Luffy cannot understand who the thief is. He asks you to find out **the number of those who can be considered a thief** according to the answers.

## Input :

The first line contains a single integer **T** $(1≤T≤10^4)$ — the number of test cases. Then the test cases follow. Each test case consists of one line.

For each test case:

A single line s describes the friends answers in the order they visited the map $(length ≤ 2⋅10^5)$, where each character $s_i$ in the string is either 0 or 1 or ? indicates the answer of the i-th friend.
**It is guaranteed that the input is logically correct**.

It is guaranteed that the sum of string lengths over the entire input data set does not exceed $2⋅10^5$.

## Output :

For each test case, output a positive integer (strictly greater than zero) representing the number of friends who could have stolen the One Piece map based on the provided responses (those whom Luffy could suspect of stealing the map).

## Example:

Input :

```
3
1110000
1?1??0?0
??11
```

Output :

```
2
4
1
```

## Note:

In the firs case, the suspects are the third and fourth friends (we count from one).It can be shown that no one else could be the thief.
