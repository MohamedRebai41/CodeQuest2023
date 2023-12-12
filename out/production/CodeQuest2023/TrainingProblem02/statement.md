# Problem B: Kizaru the Sloth

## Statement:

Kizaru is a strong marine admiral. One may say he is the strongest out there maybe even more than Garp the marine hero himself. However there is one problem with him. He is a sloth. An admiral doesn't only have to fight pirates but also have to take care of a lot of paper work. Kizaru is too lazy to do it by himself. So he asks Dr Vegapunk so he can build him a robot that write down whatever kizaru says a number of times as he demands.

As the new assisstant of Dr Vegapunk, you are tasked with writing the robot's program for him.

## Input :
The first line contains the number ***N*** the number of sentences he will say. $1\le N \le 1000$ <br>
The next **N** lines, each contains a number ***len*** the length of the sentence, a string ***S*** the sentence to be written and the number ***M*** the number of times the sentence will be repeated. $1\le len \le 1000$ , $0\le M \le 1000$

## Output :
Output the sentences written by the robot.

## Example:
Input :  

```
2
5 kizaru 10
2 No 4
```

Output :  

```
kizarukizarukizarukizarukizarukizarukizarukizarukizarukizaru
NoNoNoNo

```

Input :  

```
3
1 I 10
9 Sentomaru 1
```

Output :  

```
IIIIIIIIII
Sentomaru

```
