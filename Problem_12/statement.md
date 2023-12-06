# Problem E: Bounty Challenge

## Statement:

Trafalgar Law, captain of the heart pirates, is facing a bit of a problem. In front of him there exists **n** strong enemies that he needs to fight. If the value of his current bounty is greater than the strength of his enemy then he can win the fight, otherwise he will choose to run away.
The problem is that, with every fight he wins, his bounty will increase by a 100 and if his bounty exceeds the value **L** then Kizaru, one of the strongest fighters in the marine will be dispatched to get rid of him.

Given the number of fights _n_, the maximum allowable bounty _L_ and an array of integers _fights_ representing the strengh of the opponents, the procedure for simulating the fights is as follows:

_1._ Start with an initial bounty _B_

_2._ For each fight; if the current bounty is greater than the strength of the opponent _fights<sub>i</sub>_ _(1<=i<=n)_, add 100 to the current bounty.

Your objective is to find the maximum initial bounty _B_ such that after all the fights, the final bounty is less than or equal to _L_.

Your objective is to find the maximum initial bounty _B_ such that after all the fights, the final bounty is less than or equal to _L_.

## Input :

The first line of the input contains integers _n_ and _L_ _(1<=n<=10<sup>5</sup>, 0<=L<=10<sup>18</sup>)_, the number of fights, and the maximum allowable bounty respectively.

The second line of the input contains _n_ space-separated integers _fights<sub>i</sub>_, the strength of the _i-th_ opponent. _(1<=fights<sub>i</sub> <= 10<sup>9</sup>)_

## Output :

Print a single integer, the maximum initial bounty _B_ such that after all the fights, the final bounty is less than or equal to _L_.

## Example:

Input :

```
5 700
300 200 500 100 700
```

Output :

```
300
```

Input :

```
4 500
700 200 300 100
```

Output :

```
200
```

## Explanation:

First example:

For initial bounty _B_ = 300, the bounty will change as follows :

i = 1: 300 <= 300, Trafalgar will run away.

i = 2: 300 > 200, Trafalgar will win and bounty will become 400

i = 3: 400 <= 500, Trafalgar will run away.

i = 4: 400 > 100, Trafalgar will win and bounty will become 500

i = 5: 500 <= 700, Trafalgar will run away.

After all the fights, the final bounty is less than or equal to _L_

If _B_ = 301, we will have:

i = 1: 301 > 300, Trafalgar will win and bounty will become 401.

i = 2: 401 > 200, Trafalgar will win and bounty will become 501.

i = 3: 501 > 500, Trafalgar will win and bounty will become 601.

i = 4: 601 > 100, Trafalgar will win and bounty will become 701.

i = 5: 701 > 700, Trafalgar will win and bounty will become 801.

After all the fights, the final bounty will be greater than _L_.

_B_ = 300 is then the maximum initial bounty.
