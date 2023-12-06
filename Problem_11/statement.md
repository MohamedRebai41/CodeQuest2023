# Problem H : Clone Fruit

## Statement:

Kaido, one of the four emperors of the sea, would like to build a huge army in order to obtain the one piece.

He first acquired a huge number of Clone Fruits: These fruits, like the name indicates, have the unique ability to clone a person

Then, he chose **m** of his best crewmates and started cloning them as follows:

- At first the crewmates stand in a queue
- Each time a crewmate is cloned, the two resulting persons rejoin the end of the queue

Kaido would like to keep track of the person that ate the **n-th** fruit. Help him figure this out.

## Input :

The first line contains a single integer**n** $(1≤n≤10^9)$ representing the mentioned **n**.

The second line contains a single integer **m** $(1≤m≤1000)$ indicating the initial number of people in the queue.

The next **m** lines contains the names of the m individuals with the i-th line representing the name of the i-th person

**It is guaranteed that the length of the names does not exceed 10**

## Output :

For each test case, output a single line — **the name of the person who consumes the n-th cloning fruit**. The fruits are numbered starting from 1.

## Example:

Input :

```
3
5
King
Queen
Jack
Ulti
Sasaki
```

Output :

```
Jack
```

Input :

```
6
3
King
Queen
Jack
```

Output :

```
Jack
```
