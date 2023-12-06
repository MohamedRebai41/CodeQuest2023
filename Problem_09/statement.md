# Problem F: Blood Transfusion

## Statement:

Chopper is the doctor of the Straw Hat pirates. After the big war at the country of wano, there are **n** injured people that need a blood transfusion.

Chopper is determined to save everyone, so he rounds up **n** donors.
Each person has a specific blood type $A$, $B$, $AB$ or $O$.

There are certain rules to the blood transfusion operations:

- A donor can only donate to one injured person
- Blood type $A$ donors can only donate to recipients with blood types $A$ and $AB$.
- Blood type $B$ donors can only donate to recipients with blood types $B$ and $AB$.
- Blood type $AB$ donors can only donate to recipients with blood type $AB$ only.
- Blood type $O$ donors can donate to recipients with blood types $A$, $B$, $AB$ and $O$.

Help chopper figure out if he can save every injured person using the donors he picked.

## Input :

The first line contains T $(1\leq T \leq 100)$ , the number of testaces.

The first line of each testcase contains n $(1\leq n \leq 2*10^6)$ the number of injured people

The second line of each testcase containe **n** space separated strings denoting the blood types of the injured people

The third line of each testcase contains **n** space separated strings denoting the blood types of the donors

**It is guaranteed that the sum of n over all the testcases does not exceed $2*10^6$**

## Output :

For each query, output **"YES"**(without quotes) if the injured people can be saved and **"NO"**(without quotes) otherwise.

## Example:

Input :

```
3
2
A A
A B
5
A B AB O A
O O O O O
5
A A A B AB
O O B B B
```

Output :

```
NO
YES
NO
```

## Note:

In the first test case, we can only save one person of blood type A.

In the second testcase, every person can receive a donation from an O donor

In the third testcase, we can only save two people of blood type A.
