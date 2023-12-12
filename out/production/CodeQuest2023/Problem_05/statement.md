

# Problem D: Currensea

## Statement:
The world of one piece is vast and contains numerous mystical islands. One such island is "Currensea": an island where its only currency are coins with values (11, 111, 1111, ...).
Upon arrival on this island, Nami wants to sell her new jewelry she acquired in Skypeia but doesn't know how to price her goods.

She wants to know, if it's possible to price her jewelry to some integer **n** so that it can be bought using this island's unique currency?

**Note that you can use any coin any number of times to buy something.** 

## Input :
The first line contains a single integer **T** $(1≤T≤1000)$ — the number of test cases. Then the test cases follow. 
Each test case consists of one line. the integer  **n** $(0≤n≤10^9)$

## Output :
For each testcase, you should output a single string. If you can buy n using the island's currency, output "YES" (without quotes). Otherwise, output "NO".

## Example:
Input :  

```
3
55
1122
150
```

Output :  

```
Yes
Yes
No 
```
## Explanation
* 55 = 5*11
* 1122 = 11 + 1111
* It can be proved that 150 can't be written as the sum of $11a + 111b + 1111c + 11111d + ...$ 
