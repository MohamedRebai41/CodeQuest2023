#  Problem C - Currensea

Let f(n) be the function that associates a number n to the value 1111... (n times)
For example, f(7) = 1111111

We can prove (using strong induction) that for all $(n \geq 3)$, there exists $a\geq0$ and $b\geq0$  such that $f(n) = af(2) + bf(3) =11a + 111b$ 

The problem is thus reduced to the following problem: can $n$ be written: $$n=11a+111b$$ where $a,b\geq0$ and

**All the following solutions are based on this key observation**

* **Solution 1: iterate over b**:
	* Since the maximum value for $n$ is $10^9$ we can safely iterate over the possible values of b and check if $(n - 111b)$ is divisible by 11. 
	* This solution only works given the low constraints 

* **Solution 2: extended euclidean algorithm**:
	* By using the extended euclidean algorithm, we calculate the solutions for the following equation $$11x + 111y = 1$$
	* The solutions are $x=-10+111k$ and $y=1-11k$ where $k$ is an integer
	* We can then solve for the equation $$11x+111y = n$$
	* The solutions are $x = -10n+111k$ and $y=n-11k$
	* We need $x,y\geq0$.  The maximum value $k$ can take while maintaining y positive is $n/11$  
	* If x is also positive for this solution then an answer exists
* **Solution 3: euclidean division:** 
	* $n=11a+111b = 11a +111(11q+r) = 11(a+111q)+111r$
	where $(0\leq r \leq10)$ 
	* We iterate over the possible values of r and check if $n-111b$ is divisible by $11$

Read more about the [extended euclidean algorithm](https://brilliant.org/wiki/extended-euclidean-algorithm/)
