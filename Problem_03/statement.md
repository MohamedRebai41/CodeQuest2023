# Problem C : Stolen necklace

## Statement:

Nami, recently acquired a priceless necklace. Eager to share her new treasure,She invited her **n** friends to The Going Merry (the straw hats' pirate ship) , where she proudly displayed the necklace.

The friends, **one by one**, entered and exited the room. At no point were there more than one friend in the room. In other words, the first friend entered and left first, then the second, and so on.

At the beginning (before any friend visited), **the necklace was in the room**.However, by the end (after the n-th friend), **the map mysteriously vanished**.The exact moment of disappearance remains shrouded in uncertainty.

Determined to identify the culprit, Nami questioned her friends one by one in the same order they visited the room. Each friend was asked if the map was still there when they entered. Each friend answered using one of three answers:

- No (represented with **0**)
- Yes (represented with **1**)
- Can't remember (represented with **?**)

Everyone except the thief either couldn't remember or **told the truth**. The thief, however, **can say anything** (any of the three options).

Nami cannot find who the thief is. She asks you to find out **the number of potential suspects** according to the answers of her friends.

## Input :

The first line contains a single integer **T** $(1≤T≤10^4)$ — the number of test cases. Then the test cases follow. Each test case consists of two lines.

For each test case:

The first line contains a single integer **n** $(1≤T≤2⋅10^5)$ — the lenght of the string s that describes the friends answers.

The second line s describes the friends answers in the order they visited the map $(s.length ≤ 2⋅10^5)$, where each character $s_i$ in the string is either 0 or 1 or ? indicates the answer of the i-th friend.
**It is guaranteed that the input is logically correct**.

It is guaranteed that the sum of string lengths over the entire input data set does not exceed $2⋅10^5$.

## Output :

For each test case, output a positive integer (strictly greater than zero) representing the number of friends who could have stolen the necklace based on the provided responses (those whom Nami could suspect of stealing the necklace).

## Example:

Input :

```
3
7
1110000
8
1?1??0?0
4
??11
```

Output :

```
2
4
1
```

## Note:

In the first case, the suspects are the third and fourth friends (one-indexed).It can be shown that no one else could be the thief.
