# Problem B : The Switch Game

## Statement:
Monkey D. Luffy and Roronoa Zoro are engaged in a strategic number swapping game. The game involves two numbers, $A$ and  $B$, each of length $n$. In each turn, the players will perform actions based on the values of digits of the numbers denoted by $a_i$ and $b_i$ ($1 \leq i \leq n$).
The rules of the game are:

 - Game starts at turn 1 from the left digits of $A$ and $B$.
 
 - in the $i$-th turn, if $a_i > b_i$, the current player must swap $a_i$ and $b_i$. The current player keeps playing the next turn.
 
 - in the $i$-th turn, if $a_i < b_i$, the current player loses his turn and the other player plays the next turn.
 
 - in the $i$-th turn, if $a_i = b_i$, the current player has two choices. Either he keeps playing the next turn or lets the other player play the next turn.
 
 - The game ends in the ${(n+1)}$-th turn. The winner is the player who has the turn in the ${(n+1)}$-th turn.

Given $A$ and $B$, your task is determine the winner of the game if Luffy begins playing in the first turn and both players play optimally.  

## Input:
The first line of input contains a single integer $A$. 
The second line of input contains a single integer $B$.
Numbers $A$ and $B$ have the **same** number of digits $n$ ($1 \leq n \leq 4 \times 10^6$).

## Output:
Print a single line containing "**Luffy**" if Alice wins or "**Zoro**" if Bob wins. 

## Example:
input:
```
234
155
```
output:
```
Luffy
```
input:
```
2394
1595
```
output:
```
Zoro
```

## Explanation:
First example: 
In the first turn, Luffy swaps 2 and 1 and keeps playing. In the second turn, Luffy can't swap 3 and 5 so he loses his turn. In the third turn, Zoro can't swap 4 and 5 so he also loses his turn. In the fourth turn, the game ends with Luffy having this turn, so Luffy wins.

Second example:
In the first turn, Luffy swaps 2 and 1 and keeps playing. In the second turn, Luffy can't swap 3 and 5 so he loses his turn. In the third turn, Zoro choses to let Luffy play the next turn. In the fourth turn, Luffy can't swap 4 and 5 so he loses his turn. In the fifth turn, the game ends with Zoro having this turn, so Zoro wins.
