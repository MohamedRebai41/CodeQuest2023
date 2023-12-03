# Problem K : Cloning Fruit

## Statement:

In One Piece world, there exists a remarkable tree known as the Cloning Tree. This tree bears a fruit "The Cloning Fruit" with a magical effect, duplicating every person who consumes it.
In the queue for the "Cloning Tree", **m** nakama (friends) await their turn. The first person in the queue, denoted as Luffy for example, consumes a fruit and duplicates. The resulting two Luffys move to the end of the queue. Subsequently, each person who consumes a fruit undergoes the same process, creating an **infinite** doubling cycle.

For example, if the initial queue consists of 5 people (Luffy, Nami, Zoro, Sanji, Brook), and Zoro consumes the third Cloning Fruit, the updated queue becomes: Sanji, Brook, Luffy, Luffy, Nami, Nami, Zoro, Zoro.

Write a program to determine the name of the person who consumes the **n-th** cloning fruit.

## Input :

The first line contains a single integer**n** $(1≤n≤10^9)$ representing the mentioned **n**.
The second line contains a single integer **m** $(1≤n≤1000)$ indicating the initial number of people in the queue.
The next **m** lines contains the names of the m individuals with the i-th line representing the name of the i-th person.
**It is guaranteed that the length of all names does not exceed 10**.

## Output :

For each test case, output a single line — **the name of the person who consumes the n-th cloning fruit**. The fruits are numbered starting from 1.

## Example:

Input :

```
3
5
luffy
nami
zoro
sanji
brook
```

Output :

```
zoro
```

Input :

```
20
3
luffy
nami
zoro
```

Output :

```
zoro
```
