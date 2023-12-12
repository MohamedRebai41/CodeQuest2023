#  Problem J - The Turn Game

### Solution:
A key observation is that the first player who has a turn in which $a_i = b_i$ wins because he will choose the move that will give him the turn in the next choice, he will repeat the process until he chooses the move that lets him have the last turn and wins. So we just simulate the game and keep track of who has the turn. When we encounter the first $a_i = b_i$ we print the name of the player who has the $i$-th turn.