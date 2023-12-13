# Problem H - Clone fruit

Let's suppose that initially we have 4 people denoted by A , B , C, D

Simulating the process has a time complexity of $O(n)$ which will yield a TLE verdict given the constraints of our problem

The sequence of people eating the fruits will be like the following  ABCD-AABBCCDD-AAAABBBBCCCCDDDD-.....

We separated each **section** by a - to illustrate the solution easier.

The regularity is clear : each section's size is double that of the previous section. 

We first need to identify which section the n-th fruit will land on. 

To do this we initialize a variable `curr` denoting the current fruit number and `nbr`denoting how many times each name is repeated in the current section.

We start adding whole sections $(m,2m,4m....)$ until $(curr > n)$. 

This operation costs $O(logn)$ time complexity.

After identifying the section, we just need to find the name of the person at the n-th index. 
We calculate the index of the fruit in the last section `index`.  Knowing how many times each name is repeated in the current section, we can easily deduce the answer in constant time
