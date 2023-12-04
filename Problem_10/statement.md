
# Problem : Blood Transfusion (hard version)

## Statement:

Chopper is the doctor of the Straw Hat pirates. After the big war at the country of wano, there are **n** injured people that need a blood transfusion. 

Chopper is determined to save everyone, so he rounds up **n** donors.

However, in the vast world of One Piece, there are many races and more blood types than those of the human world. Also, the rules of compatibility between blood types are different.


There are certain rules to the blood transfusion operations:
- A donor can only donate to one injured person.
- A donor can donate blood to a person of the same blood type
- The blood types are denoted by uppercase english letters and the relations between them are denoted by **m** couples **(x,y)**  $(x\neq y)$ which represent the fact that a person with blood type **x** can donate to a person of blood type **y**


Help chopper figure out if he can save every injured person using the donors he picked.

## Input :

The first line contains two space separated integers $n$ $(1\leq n \leq 100)$ and $m$ $(0\leq m \leq 650)$ the number of injured people and the number of relations between the different blood types
The second line of each testcase contains **n** space separated strings denoting the blood types of the injured people
The third line of each testcase contains **n** space separated strings denoting the blood types of the donors
The next **m** lines each contains two distinct, space separated uppercase english characters denoting the relations between the blood types.  

## Output :
For each query, output **"YES"** (without quotes) if the injured people can be saved and **"NO"** (without quotes) otherwise.

## Example:
Input :  

```
5 4
A B C Z A
A I O C O
O B
O Z
I A
Y X
```

Output :  

```
YES
```
## Note:
One possible solution in the testcase: A donates to A, I donates to A, O donates to B, O donates to Z, C donates to C
